#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void semak()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2d(-500, 500);
    glVertex2d(500, 500);
    glVertex2d(500, -500);
    glVertex2d(-500, -500);
    glEnd();
    glFlush();

    //semak//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(1, 2);
    glVertex2f(1.4, 4.2);
    glVertex2f(3, 6);
    glVertex2f(5, 8);
    glVertex2f(8, 9);
    glVertex2f(10, 9);
    glVertex2f(12.5, 8.5);
    glVertex2f(14, 7);
    glVertex2f(16, 6);
    glVertex2f(17, 4);
    glVertex2f(18, 2);
    glEnd();
    glFlush();

    //semak dalam
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(124, 252, 0);
    glBegin(GL_QUADS);
    glVertex2f(1.3, 2.2);
    glVertex2f(1.6, 4);
    glVertex2f(16.7, 4);
    glVertex2f(17.6, 2.2);
    glEnd();
    glFlush();

    glColor3ub(124, 252, 0);
    glBegin(GL_QUADS);
    glVertex2f(1.6, 4);
    glVertex2f(5.1, 7.8);
    glVertex2f(15.8, 5.8);
    glVertex2f(16.7, 4);
    glEnd();
    glFlush();

    glColor3ub(124, 252, 0);
    glBegin(GL_QUADS);
    glVertex2f(5.1, 7.8);
    glVertex2f(8.1, 8.8);
    glVertex2f(13.8, 6.8);
    glVertex2f(15.8, 5.8);
    glEnd();
    glFlush();

    glColor3ub(124, 252, 0);
    glBegin(GL_QUADS);
    glVertex2f(8.1, 8.8);
    glVertex2f(10, 8.8);
    glVertex2f(12.3, 8.3);
    glVertex2f(13.8, 6.8);

    glEnd();
    glFlush();

    //hijau standar
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0f, 1.0f, 0.0f);

    glBegin(GL_QUADS);
    glVertex2f(5, 6);
    glVertex2f(4, 6);
    glVertex2f(4, 5);
    glVertex2f(5, 5);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(9, 5);
    glVertex2f(9, 4);
    glVertex2f(10, 4);
    glVertex2f(10, 5);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(14.5, 5.5);
    glVertex2f(14.5, 4.5);
    glVertex2f(15.5, 4.5);
    glVertex2f(15.5, 5.5);
    glEnd();
    glFlush();

    //hijau agak tua
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(107, 142, 35);
    glBegin(GL_QUADS);
    glVertex2f(8, 7);
    glVertex2f(7, 7);
    glVertex2f(7, 6);
    glVertex2f(8, 6);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(107, 142, 35);
    glBegin(GL_QUADS);
    glVertex2f(11, 6);
    glVertex2f(11, 5);
    glVertex2f(12, 5);
    glVertex2f(12, 6);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(107, 142, 35);
    glBegin(GL_QUADS);
    glVertex2f(3, 4);
    glVertex2f(4, 4);
    glVertex2f(4, 3);
    glVertex2f(3, 3);
    glEnd();
    glFlush();

    //hijau crem
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(173, 255, 47);
    glBegin(GL_QUADS);
    glVertex2f(6, 5);
    glVertex2f(7, 5);
    glVertex2f(7, 4);
    glVertex2f(6, 4);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(173, 255, 47);
    glBegin(GL_QUADS);
    glVertex2f(9, 8);
    glVertex2f(9, 7);
    glVertex2f(10, 7);
    glVertex2f(10, 8);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(173, 255, 47);
    glBegin(GL_QUADS);
    glVertex2f(13, 4);
    glVertex2f(13, 3);
    glVertex2f(14, 3);
    glVertex2f(14, 4);
    glEnd();
    glFlush();

    //merah
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(9, 6.5);
    glVertex2f(9, 5.5);
    glVertex2f(10, 5.5);
    glVertex2f(10, 6.5);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(11, 4);
    glVertex2f(11, 3);
    glVertex2f(12, 3);
    glVertex2f(12, 4);
    glEnd();
    glFlush();
}