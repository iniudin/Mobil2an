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
    gluOrtho2D(0, 100 ,0 , 100);
    glutMainLoop();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //bg
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,1.0,1.0);
    glBegin(GL_QUADS);
        glVertex2f(100, 100);
        glVertex2f(0, 100);
        glVertex2f(0, 0);
        glVertex2f(100,0);
    glEnd();
    glFlush();

    //bodi utama
    glMatrixMode(GL_MODELVIEW);
    glColor3f (1.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(10, 10);
        glVertex2f(60, 10);
        glVertex2f(60, 50);
        glVertex2f(58, 58);
        glVertex2f(54, 60);
        glVertex2f(16, 60);
        glVertex2f(12, 58);
        glVertex2f(10, 50);
    glEnd();
    glFlush();

    //kaca depan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(24, 40);
        glVertex2f(18, 46);
        glVertex2f(18, 50);
        glVertex2f(52, 50);
        glVertex2f(52, 46);
        glVertex2f(46, 40);
    glEnd();
    glFlush();

    //kaca belakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
        glVertex2f(26, 24);
        glVertex2f(20, 20);
        glVertex2f(50, 20);
        glVertex2f(44, 24);
    glEnd();
    glFlush();

    //bodi belakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
        glVertex2f(20, 12);
        glVertex2f(18, 10);
        glVertex2f(52, 10);
        glVertex2f(50, 12);
    glEnd();
    glFlush();

    //kaca kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
        glVertex2f(48, 34);
        glVertex2f(48, 28);
        glVertex2f(56, 26);
        glVertex2f(56, 40);
    glEnd();
    glFlush();

    //kaca kiri
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
        glVertex2f(22, 34);
        glVertex2f(22, 28);
        glVertex2f(14, 26);
        glVertex2f(14, 40);
    glEnd();
    glFlush();

    //lampu kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_QUADS);
        glVertex2f(60, 12);
        glVertex2f(54, 12);
        glVertex2f(54, 10);
        glVertex2f(60, 10);
    glEnd();
    glFlush();

    //lampu kiri
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_QUADS);
        glVertex2f(10, 12);
        glVertex2f(16, 12);
        glVertex2f(16, 10);
        glVertex2f(10, 10);
    glEnd();
    glFlush();

    //lampu depan kiri
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_QUADS);
        glVertex2f(16, 60);
        glVertex2f(12, 58);
        glVertex2f(11.5, 56);
        glVertex2f(16, 56);
    glEnd();
    glFlush();

    //lampu depan kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_QUADS);
        glVertex2f(54, 60);
        glVertex2f(58, 58);
        glVertex2f(58.5, 56);
        glVertex2f(54, 56);
    glEnd();
    glFlush();

    //roda dpn kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUADS);
        glVertex2f(60, 50);
        glVertex2f(58, 48);
        glVertex2f(58, 44);
        glVertex2f(60, 42);
    glEnd();
    glFlush();

    //roda bk kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUADS);
        glVertex2f(60, 24);
        glVertex2f(58, 22);
        glVertex2f(58, 18);
        glVertex2f(60, 16);
    glEnd();
    glFlush();

    //roda dpn kiri
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUADS);
        glVertex2f(10, 50);
        glVertex2f(12, 48);
        glVertex2f(12, 44);
        glVertex2f(10, 42);
    glEnd();
    glFlush();

    //roda bk kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUADS);
        glVertex2f(10, 24);
        glVertex2f(12, 22);
        glVertex2f(12, 18);
        glVertex2f(10, 16);
    glEnd();
    glFlush();
}

