#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include "class/Terrains.hpp"
#include "class/Car.hpp"
#include "class/otherCar.hpp"
#include "class/functions.hpp"

// Constants
GLdouble WIDTH = 1200;
GLdouble HEIGHT = 800;

Terrains *terrains = new Terrains();
Car *cars0 = new Car();
OtherCar *cars1 = new OtherCar();

char programName[] = "Mobil2an";
int FPS = 50;
int GAMESTATE = 0;

void init()
{
    gluOrtho2D(0, WIDTH, 0, HEIGHT);
}

void gameState()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);

    if (GAMESTATE == 1)
    {
        // ongame
    }
    else
    {
        // glClearColor(0.128, 0.128, 0.128, 0);
        terrains->drawStreet();
        cars0->move(0, 100);
        cars1->move(0, 500);
        glColor3ub(255, 0, 0);
        drawText("Hallo", GLUT_BITMAP_HELVETICA_18, 0, 200);
    }
    glFlush();
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
    glutDisplayFunc(gameState);
    glutMainLoop();
    return 0;
}