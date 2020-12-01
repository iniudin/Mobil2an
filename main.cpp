#include "cross_platform/GLUT.hpp"
#include <iostream>

// Constants
const int WIDTH = 680, HEIGHT = 480;
const char programName[] = "Mobil2an";

void init()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPointSize(100.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    gluOrtho2D(0, WIDTH, 0, HEIGHT);
}

void drawText(std::string text, void *font, int x, int y)
{

    glPushMatrix();
    glColor3f(0.0f, 0.0f, 1.0f);
    glRasterPos2i(x, y);
    for (std::string::iterator i = text.begin(); i != text.end(); ++i)
    {
        char c = *i;
        glutBitmapCharacter(font, c);
    }
    glPopMatrix();
}

void Timer(int value)
{
    glutTimerFunc(1000 / 60, Timer, value);
    glutPostRedisplay();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2d(WIDTH / 2, HEIGHT / 2);
    glEnd();
    drawText("HELLO WOIII", GLUT_BITMAP_9_BY_15, 50, 50);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow(programName);
    init();
    Timer(0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}