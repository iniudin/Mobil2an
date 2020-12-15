#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();
int angle;
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Menu");
    glutDisplayFunc(display);
    gluOrtho2D(-30, 60 ,-30 , 60);
    glutMainLoop();
}

void display()
{
    //Kotak BG//
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(0, 30);
        glVertex2f(0, -5);
        glVertex2f(45, -5);
        glVertex2f(45, 30);
    glEnd();
    glFlush();

    //Kotak Luar//
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
        glVertex2f(2, 24);
        glVertex2f(2, 2);
        glVertex2f(42, 2);
        glVertex2f(42, 24);
    glEnd();
    glFlush();

    //Kotak Dalam//
    glColor3f(0, 0, 0.5);
    glBegin(GL_QUADS);
        glVertex2f(4, 22);
        glVertex2f(4, 4);
        glVertex2f(40, 4);
        glVertex2f(40, 22);
    glEnd();
    glFlush();
}
