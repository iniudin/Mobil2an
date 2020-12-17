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

char programName[] = "Mobil2an";
int FPS = 50;
int GAMESTATE = 0;

void init()
{
    glOrtho(0, pixel, 0, pixel, -1, 1);
}

void gameState()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    terrains->drawStreet();
    if (GAMESTATE == 1)
    {
        char text_fps[10];
        sprintf(text_fps, "FPS: %d", FPS);
        cars1->Respawn();
        drawText(text_fps, GLUT_BITMAP_HELVETICA_18, 0, 90, 255, 255, 255);
    }
    else
    {
        glClearColor(0.13, 0.54, 0.13, 0);
        GAMESTATE = 1;
    }
    glFlush();
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
    // glutSP(onKeyboard);
    glutDisplayFunc(gameState);
    Timer(0);
    glutMainLoop();
    return 0;
}