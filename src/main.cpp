#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include "class/Terrains.hpp"
#include "class/Car.hpp"
#include "class/functions.hpp"
#include <iostream>

// Constants
GLdouble WIDTH = 640;
GLdouble HEIGHT = 800;
GLdouble pixel = 100;

Terrains *terrains = new Terrains();
Car *cars0 = new Car("red");
Car *cars1 = new Car("purple");
Car *cars2 = new Car("blue");
Car *cars3 = new Car("yellow");

char programName[] = "Mobil2an Geming";
int FPS = 60;
int GAMESTATE = 0;
int score = 0;
int temp_score = 0;
int highScore = 0;
bool gameOver = false;
bool gamePaused = false;
double speed = 0.5;

double lane = 30;
double positiion = 100;
double lane_1 = 50;
double positiion_1 = 125;
double lane_2 = 70;
double positiion_2 = 150;

void init()
{
    glOrtho(0, pixel, 0, pixel, -1, 1);
}

void mainMenu()
{
    drawBox(25, 80, 75, 85, 238, 238, 238);
    drawText("Mobil2an Geming", GLUT_BITMAP_HELVETICA_18, 40, 81, 43, 51, 95);

    if (gameOver)
    {
        drawBox(30, 55, 70, 65, 212, 24, 108);
        drawText("GAME OVER!!!", GLUT_BITMAP_HELVETICA_18, 40, 61, 238, 238, 238);
        char text_score[20];
        sprintf(text_score, "Your Score: %i", temp_score);
        drawText(text_score, GLUT_BITMAP_HELVETICA_18, 40, 57, 238, 238, 238);
    }
    else if (gamePaused)
    {
        drawBox(30, 55, 70, 65, 212, 24, 108);
        drawText("Game Paused!!!", GLUT_BITMAP_HELVETICA_18, 40, 59, 238, 238, 238);
    }
    drawBox(25, 30, 75, 42, 57, 92, 152);
    drawText("Press S to Start / Continue", GLUT_BITMAP_HELVETICA_18, 30, 37, 238, 238, 238);
    drawText("Press X to Exit / Pause", GLUT_BITMAP_HELVETICA_18, 30, 33, 238, 238, 238);

    drawBox(25, 22, 75, 30, 30, 144, 255);
    drawText("Controller: ", GLUT_BITMAP_HELVETICA_18, 30, 27, 238, 238, 238);
    drawText("Right <- | -> Left", GLUT_BITMAP_HELVETICA_18, 30, 24, 238, 238, 238);
}

void setOtherCar()
{
    cars1->OtherRespawn(lane, positiion);
    cars2->OtherRespawn(lane_1, positiion_1);
    cars3->OtherRespawn(lane_2, positiion_2);

    positiion -= speed;
    positiion_1 -= speed;
    positiion_2 -= speed;
    if (positiion <= -10)
    {
        positiion = 100;
        lane = 25 + (std::rand() % (70 - 25 + 1));
        score += 1;
    }
    if (positiion_1 <= -10)
    {
        positiion_1 = 100;
        lane_1 = 25 + (std::rand() % (70 - 25 + 1));
        score += 1;
    }

    if (positiion_2 <= -10)
    {
        positiion_2 = 100;
        lane_2 = 25 + (std::rand() % (70 - 25 + 1));
        score += 1;
    }
    if (score % 2 == 1)
    {
        speed += 0.0001;
    }

    if ((abs(cars0->car_x - lane) < 6) && (positiion <= 10))
    {
        GAMESTATE = 0;
    }
    else if ((abs(cars0->car_x - lane_1) < 6) && (positiion_1 <= 10))
    {
        GAMESTATE = 0;
    }
    else if ((abs(cars0->car_x - lane_2) < 6) && (positiion_2 <= 10))
    {
        GAMESTATE = 0;
    }

    if (GAMESTATE == 0)
    {
        lane = 30;
        positiion = 100;
        lane_1 = 50;
        positiion_1 = 125;
        lane_2 = 70;
        positiion_2 = 150;
        speed = 0.5;
        if (score >= highScore)
        {
            highScore = score;
        }
        temp_score = score;
        score = 0;
        gameOver = true;
    }
}

void onGame()
{
    setOtherCar();
    cars0->Respawn();

    if (highScore)
    {
        char text_highscore[20];
        sprintf(text_highscore, "HighScore: %i", highScore);
        drawText(text_highscore, GLUT_BITMAP_HELVETICA_18, 0, 96, 238, 238, 238);
    }
    char text_score[20];
    sprintf(text_score, "Score: %i", score);
    drawText(text_score, GLUT_BITMAP_HELVETICA_18, 0, 93, 238, 238, 238);

    char text_fps[10] = "Speed:";
    drawText(text_fps, GLUT_BITMAP_HELVETICA_18, 0, 90, 238, 238, 238);

    char text_speed[20];
    sprintf(text_speed, "%f km/s", speed * 100);
    drawText(text_speed, GLUT_BITMAP_HELVETICA_18, 0, 87, 238, 238, 238);
}

void gameState()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    drawBox(0, 100, 100, 0, 2, 81, 89);
    terrains->drawStreet();
    if (GAMESTATE == 1)
    {
        onGame();
    }
    else
    {
        mainMenu();
    }
    glFlush();
}

void onMainMenu(unsigned char key, int x, int y)
{
    if (key == 's' || key == 'S')
    {
        GAMESTATE = 1;
        gamePaused = false;
    }
    else if (key == 'x' || key == 'X')
    {
        if (GAMESTATE == 1)
        {
            GAMESTATE = 0;
            gamePaused = true;
        }
        else
        {
            exit(0);
        }
    }
}

void onKeyboard(int key, int x, int y)
{
    if (key == GLUT_KEY_RIGHT)
    {
        cars0->car_x += 1;
    }
    if (key == GLUT_KEY_LEFT)
    {
        cars0->car_x -= 1;
    }
    if (key == GLUT_KEY_UP)
    {
    }

    if (cars0->car_x <= 22)
    {
        cars0->car_x = 22;
    }
    if (cars0->car_x >= 71)
    {
        cars0->car_x = 71;
    }
}

void Timer(int value)
{
    glutTimerFunc(1000 / FPS, Timer, value);
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow(programName);
    init();
    glutSpecialFunc(onKeyboard);
    glutKeyboardFunc(onMainMenu);
    glutDisplayFunc(gameState);
    Timer(0);
    glutMainLoop();
    return 0;
}