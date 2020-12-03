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
    glutCreateWindow("Mobil");
    glutDisplayFunc(display);
    gluOrtho2D(-20, 30 ,-20 , 30);
    glutMainLoop();
}

void display()
{
    //Kotak Gede//
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 0.4, 0);
    glBegin(GL_QUADS);
        glVertex2f(0, 0);
        glVertex2f(14, 0);
        glVertex2f(14, 20);
        glVertex2f(0, 20);
    glEnd();
    glFlush();

    //Kotak Tengah//
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(4, 0);
        glVertex2f(10, 0);
        glVertex2f(10, 20);
        glVertex2f(4, 20);
    glEnd();
    glFlush();

    //Kotak Pinggir Kiri Bawah//
    glColor3f(0, 1, 0);
    glBegin(GL_QUADS);
        glVertex2f(1, 4);
        glVertex2f(3, 4);
        glVertex2f(3, 8);
        glVertex2f(1, 8);
    glEnd();
    glFlush();

    //Kotak Pinggir Kiri Atas//
    glColor3f(0, 1, 0);
    glBegin(GL_QUADS);
        glVertex2f(1, 12);
        glVertex2f(3, 12);
        glVertex2f(3, 16);
        glVertex2f(1, 16);
    glEnd();
    glFlush();

    //Kotak Pinggir Kanan Bawah//
    glColor3f(0, 1, 0);
    glBegin(GL_QUADS);
        glVertex2f(11, 4);
        glVertex2f(13, 4);
        glVertex2f(13, 8);
        glVertex2f(11, 8);
    glEnd();
    glFlush();

    //Kotak Pinggir Kanan Atas//
    glColor3f(0, 1, 0);
    glBegin(GL_QUADS);
        glVertex2f(11, 12);
        glVertex2f(13, 12);
        glVertex2f(13, 16);
        glVertex2f(11, 16);
    glEnd();
    glFlush();

}
