#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include "Terrains.hpp"

void Terrains::drawStreet()
{
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(128, 128, 128);
    glBegin(GL_QUADS);
    glVertex2f(20, 0);
    glVertex2f(20, 100);
    glVertex2f(80, 100);
    glVertex2f(80, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(20, 0);   // kiri bawah
    glVertex2f(20, 100); // kiri atas
    glVertex2f(22, 100); // kanan atas
    glVertex2f(22, 0);   // kanan bawah
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(78, 0);   // kiri bawah
    glVertex2f(78, 100); // kiri atas
    glVertex2f(80, 100); // kanan atas
    glVertex2f(80, 0);   // kanan bawah
    glEnd();
}