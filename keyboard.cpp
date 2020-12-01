#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>

int KananKiri=0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glEnable(GL_COLOR_MATERIAL);
    glTranslated(KananKiri,0,0);
    KananKiri=0;
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(3,0);
    glVertex2f(3,3);
    glVertex2f(0,3);
   
    glEnd();
    glFlush();
}

void ArahKey(int key,int x, int y){

    //arah kanan
    if(key==102)
    {
        KananKiri+=1;
        glutPostRedisplay();
    }
    //arah kiri
    if(key==100)
    {
        KananKiri-=1;
        glutPostRedisplay();
    }

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("kotak");
    glutSpecialFunc(ArahKey);
    gluOrtho2D(-10, 10, -10, 10);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
