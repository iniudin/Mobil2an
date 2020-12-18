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
Car *cars2 = new Car("purple");
Car *cars3 = new Car("purple");

char programName[] = "Mobil2an";
int FPS = 40;
int GAMESTATE = 0;
int score = 0;
bool gameOver = false;

// int pos[MAXCARS];
// int lane[MAXCARS];

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
    drawBox(25, 80, 75, 85, 0, 0, 0);
    drawText("Mobil2an Geming", GLUT_BITMAP_HELVETICA_18, 30, 81, 255, 0, 255);
    drawBox(25, 70, 75, 75, 0, 0, 0);
    drawText("Press S to Start", GLUT_BITMAP_HELVETICA_18, 30, 71, 255, 0, 255);
}

void setOtherCar()
{
    cars1->OtherRespawn(lane, positiion);
    cars2->OtherRespawn(lane_1, positiion_1);
    cars3->OtherRespawn(lane_2, positiion_2);

    positiion -= 0.7;
    positiion_1 -= 0.7;
    positiion_2 -= 0.7;
    if (positiion <= -10)
    {
        positiion = 100;
        // srand(time(NULL));
        lane = 25 + (std::rand() % (70 - 25 + 1));
        FPS += 1;
        score += 10;
    }
    if (positiion_1 <= -10)
    {
        positiion_1 = 100;
        // srand(time(NULL));
        lane_1 = 25 + (std::rand() % (70 - 25 + 1));
        FPS += 1;
        score += 10;
    }

    if (positiion_2 <= -10)
    {
        positiion_2 = 100;
        // srand(time(NULL));
        lane_2 = 25 + (std::rand() % (70 - 25 + 1));
        FPS += 1;
        score += 10;
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
        FPS = 40;
        score = 0;
    }
}

void onGame()
{
    setOtherCar();
    cars0->Respawn();

    char text_fps[20];
    sprintf(text_fps, "SPEED: %d", FPS);
    drawText(text_fps, GLUT_BITMAP_HELVETICA_18, 0, 95, 238, 238, 238);

    char text_score[20];
    sprintf(text_score, "SCORE: %i", score);
    drawText(text_score, GLUT_BITMAP_HELVETICA_18, 0, 85, 238, 238, 238);
}

void gameState()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.098, 0.584, 0.611, 0);
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
        FPS += 1;
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