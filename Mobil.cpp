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

    //Kotak Badan mobil//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
        glVertex2f(1, 0);
        glVertex2f(1, 10);
        glVertex2f(15, 20);
        glVertex2f(15, 20);
    glEnd();
    glFlush();

    //Kotak Tengah Mobil//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(1, 4);
        glVertex2f(1, 13);
        glVertex2f(15, 13);
        glVertex2f(15, 4);
    glEnd();
    glFlush();

    //Kotak Tengah Tengah mobil//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
        glVertex2f(4, 6);
        glVertex2f(12, 6);
        glVertex2f(12, 10);
        glVertex2f(4, 10);
    glEnd();
    glFlush();

    //Mocong Mobil//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(4, 13);
        glVertex2f(12, 13);
        glVertex2f(11, 17);
        glVertex2f(5, 17);
    glEnd();
    glFlush();

    //Lampu Kiri Mobil//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 0);
    glBegin(GL_QUADS);
        glVertex2f(1, 18);
        glVertex2f(4, 18);
        glVertex2f(4, 20);
        glVertex2f(1, 20);
    glEnd();
    glFlush();

    //Lampu Kanan Mobil//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 0);
    glBegin(GL_QUADS);
        glVertex2f(12, 18);
        glVertex2f(15, 18);
        glVertex2f(15, 20);
        glVertex2f(12, 20);
    glEnd();
    glFlush();

    //Pelek Depan//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(4, 19);
        glVertex2f(12, 19);
        glVertex2f(12, 20);
        glVertex2f(4, 20);
    glEnd();
    glFlush();

    //Lampu Send Kiri Kiri//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 0);
    glBegin(GL_QUADS);
        glVertex2f(2, 0);
        glVertex2f(3.5, 0);
        glVertex2f(3.5, 1);
        glVertex2f(2, 1);
    glEnd();
    glFlush();

    //Lampu Send Kiri Kanan//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
        glVertex2f(3.5, 0);
        glVertex2f(5, 0);
        glVertex2f(5, 1);
        glVertex2f(3.5, 1);
    glEnd();
    glFlush();

    //Lampu Send Kanan Kiri//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 0);
    glBegin(GL_QUADS);
        glVertex2f(11, 0);
        glVertex2f(12.5, 0);
        glVertex2f(12.5, 1);
        glVertex2f(11, 1);
    glEnd();
    glFlush();

    //Lampu Send Kanan Kanan//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
        glVertex2f(12.5, 0);
        glVertex2f(14, 0);
        glVertex2f(14, 1);
        glVertex2f(12.5, 1);
    glEnd();
    glFlush;

    //Spion Kiri//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
        glVertex2f(0, 12);
        glVertex2f(2, 12);
        glVertex2f(2, 13);
        glVertex2f(0, 13);
    glEnd();
    glFlush();

    //Spion Kanan//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
        glVertex2f(14, 12);
        glVertex2f(16, 12);
        glVertex2f(16, 13);
        glVertex2f(14, 13);
    glEnd();
    glFlush();

    //Strip Kiri//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
        glVertex2f(1, 7);
        glVertex2f(4, 7);
        glVertex2f(4, 8);
        glVertex2f(1, 8);
    glEnd();
    glFlush();

    //Strip Kanan//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
        glVertex2f(12, 7);
        glVertex2f(15, 7);
        glVertex2f(15, 8);
        glVertex2f(12, 8);
    glEnd();
    glFlush();

    //Putih Putih DiPinggir//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
        glVertex2f(1, 8);
        glVertex2f(4, 8);
        glVertex2f(4, 10);
        glVertex2f(2, 12);
        glVertex2f(1, 12);
    glEnd();
    glFlush();

    //Putih Putih DiPinggir//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
        glVertex2f(4, 10);
        glVertex2f(12, 10);
        glVertex2f(14, 12);
        glVertex2f(14, 13);
        glVertex2f(2, 13);
        glVertex2f(2, 12);
    glEnd();
    glFlush();

    //Putih Putih DiPinggir//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
        glVertex2f(12, 10);
        glVertex2f(14, 12);
        glVertex2f(15, 12);
        glVertex2f(15, 8);
        glVertex2f(12, 8);
    glEnd();
    glFlush();

    //Putih Putih DiPinggir//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(12, 7);
        glVertex2f(15, 7);
        glVertex2f(15, 4);
        glVertex2f(12, 6);
    glEnd();
    glFlush();

    //Putih Putih DiPinggir//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(12, 6);
        glVertex2f(15, 4);
        glVertex2f(1, 4);
        glVertex2f(4, 6);
    glEnd();
    glFlush();

    //Putih Putih DiPinggir//
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2f(4, 6);
        glVertex2f(1, 4);
        glVertex2f(1, 7);
        glVertex2f(4, 7);
    glEnd();
    glFlush();

}
