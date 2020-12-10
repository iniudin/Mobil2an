#include "cross_platform/GLUT.hpp"
#include <iostream>
#include "constants.cpp"
#include "mainCar.cpp"
#include "functions.cpp"

void init()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    gluOrtho2D(0, WIDTH, 0, HEIGHT);
}

void gameState()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);

    switch (game_state)
    {
    case 0:
        // on main menu
        break;
    case 1:
        // on game
        break;
    case 2:
        // game over
        break;
    }
}

void Timer(int value)
{
    glutTimerFunc(60, Timer, value);
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow(programName);
    init();
    Timer(10);
    glutDisplayFunc(gameState);
    glutMainLoop();
    return 0;
}