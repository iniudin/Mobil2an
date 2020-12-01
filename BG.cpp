#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(500,500);
    glutCreateWindow("Mobil");
    glutDisplayFunc(display);
    gluOrtho2D(-20, 30 ,-20 , 30);
    glutMainLoop();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //Kotak Gede//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 1);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(0, 0);
        glVertex2f(14, 0);
        glVertex2f(14, 20);
        glVertex2f(0, 20);
    glEnd();
    glFlush();

    //Kotak Tengah//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 0, 1);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(4, 0);
        glVertex2f(10, 0);
        glVertex2f(10, 20);
        glVertex2f(4, 20);
    glEnd();
    glFlush();

    //Kotak Pinggir Kiri Bawah//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 1, 0);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(1, 4);
        glVertex2f(3, 4);
        glVertex2f(3, 8);
        glVertex2f(1, 8);
    glEnd();
    glFlush();

    //Kotak Pinggir Kiri Atas//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 1, 0);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(1, 12);
        glVertex2f(3, 12);
        glVertex2f(3, 16);
        glVertex2f(1, 16);
    glEnd();
    glFlush();

    //Kotak Pinggir Kanan Bawah//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 1, 0);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(11, 4);
        glVertex2f(13, 4);
        glVertex2f(13, 8);
        glVertex2f(11, 8);
    glEnd();
    glFlush();

    //Kotak Pinggir Kanan Atas//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 1, 0);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(11, 12);
        glVertex2f(13, 12);
        glVertex2f(13, 16);
        glVertex2f(11, 16);
    glEnd();
    glFlush();

}
