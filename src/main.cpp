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
Car *cars0 = new Car("red", 0.2);
Car *cars1 = new Car("purple", 0.1);

char programName[] = "Mobil2an";
int FPS = 50;
int GAMESTATE = 0;

void init()
{
    glOrtho(0, pixel, 0, pixel, -1, 1);
}

void mainMenu()
{
    drawBox(25, 80, 75, 85, 0, 0, 0);
    drawText("Mobil2an Geming", GLUT_BITMAP_HELVETICA_18, 30, 82, 255, 0, 255);
}

void onGame()
{
    char text_fps[10];
    sprintf(text_fps, "FPS: %d", FPS);
    cars0->Respawn();
    cars0->car_y += 0.1;
    cars1->Respawn();
    drawText(text_fps, GLUT_BITMAP_HELVETICA_18, 0, 90, 255, 255, 255);
}

void gameState()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.13, 0.54, 0.13, 0);
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
    std::cout << key << std::endl;
    if (key == 's' || key == 'S')
    {
        GAMESTATE = 1;
    }
    gameState();
}

void onKeyboard(int key, int x, int y)
{
    std::cout << key << std::endl;
    if (key == GLUT_KEY_RIGHT)
    {
        cars1->car_x += 1;
    }
    if (key == GLUT_KEY_LEFT)
    {
        cars1->car_x -= 1;
    }
    if (key == GLUT_KEY_UP)
    {
        cars1->car_y += 1;
    }
    if (key == GLUT_KEY_DOWN)
    {
        cars1->car_y -= 1;
    }
    std::cout << cars1->car_x << std::endl;

    gameState();
}

void Timer(int value)
{
    glutTimerFunc(1000 / 60, Timer, value);
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