#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();
int angle;
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1600,900);
    glutInitWindowPosition(0,0);
    glutCreateWindow("jalan");
    glutDisplayFunc(display);
    gluOrtho2D(0,640,0,640);
    glutMainLoop();
}

void display()
{
     //jalanyanghitam//

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(128, 128, 128);
    glBegin(GL_QUADS);
        glVertex2f(180,0);
        glVertex2f(460,0);
        glVertex2f(460,900);
        glVertex2f(180,900);
    glEnd();
    glFlush();

    //batas kiri//
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(200,0);
        glVertex2f(185,0);
        glVertex2f(185,900);
        glVertex2f(200,900);
    glEnd();
    glFlush();

    //batas kanan//
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(440,0);
        glVertex2f(455,0);
        glVertex2f(455,900);
        glVertex2f(440,900);
    glEnd();
    glFlush();

    //batas tengah1//
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(310,10);
        glVertex2f(325,10);
        glVertex2f(325,130);
        glVertex2f(310,130);
    glEnd();
    glFlush();

    //batas tengah2//
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(310,180);
        glVertex2f(325,180);
        glVertex2f(325,300);
        glVertex2f(310,300);
    glEnd();
    glFlush();

    //batas tengah3//
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(310,350);
        glVertex2f(325,350);
        glVertex2f(325,470);
        glVertex2f(310,470);
    glEnd();
    glFlush();

    //batas tengah4//
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(310,520);
        glVertex2f(325,520);
        glVertex2f(325,630);
        glVertex2f(310,630);
    glEnd();
    glFlush();

}

