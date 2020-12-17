#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include "Car.hpp"
#include <iostream>
Car::Car(const char *color)
{
    this->color = color;
    this->car_x = 10;
    this->car_x = 10;
}

void Car::draw()
{
    //bodi utama
    glMatrixMode(GL_MODELVIEW);
    glScaled(0.1, 0.2, 0);
    if (this->color == "red")
    {
        glColor3ub(255, 0, 0);
    }
    else if (this->color == "purple")
    {
        glColor3ub(255, 0, 255);
    }
    glBegin(GL_POLYGON);
    glVertex2f(10, 10);
    glVertex2f(60, 10);
    glVertex2f(60, 55);
    glVertex2f(58, 62);
    glVertex2f(55, 65);
    glVertex2f(35, 67);
    glVertex2f(15, 65);
    glVertex2f(12, 62);
    glVertex2f(10, 55);
    glEnd();

    //kaca depan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(24, 40);
    glVertex2f(18, 46);
    glVertex2f(18, 50);
    glVertex2f(52, 50);
    glVertex2f(52, 46);
    glVertex2f(46, 40);
    glEnd();

    //kaca belakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(26, 24);
    glVertex2f(20, 20);
    glVertex2f(50, 20);
    glVertex2f(44, 24);
    glEnd();

    //bodi belakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(20, 12);
    glVertex2f(18, 10);
    glVertex2f(52, 10);
    glVertex2f(50, 12);
    glEnd();

    //kaca kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(48, 34);
    glVertex2f(48, 28);
    glVertex2f(56, 26);
    glVertex2f(56, 40);
    glEnd();

    //kaca kiri
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(22, 34);
    glVertex2f(22, 28);
    glVertex2f(14, 26);
    glVertex2f(14, 40);
    glEnd();

    //lampu kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(60, 12);
    glVertex2f(54, 12);
    glVertex2f(54, 10);
    glVertex2f(60, 10);
    glEnd();

    //lampu kiri
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(10, 12);
    glVertex2f(16, 12);
    glVertex2f(16, 10);
    glVertex2f(10, 10);
    glEnd();

    //lampu depan kiri
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(16, 60);
    glVertex2f(12, 58);
    glVertex2f(11.5, 56);
    glVertex2f(16, 56);
    glEnd();

    //lampu depan kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(54, 60);
    glVertex2f(58, 58);
    glVertex2f(58.5, 56);
    glVertex2f(54, 56);
    glEnd();

    //roda dpn kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(60, 50);
    glVertex2f(58, 48);
    glVertex2f(58, 44);
    glVertex2f(60, 42);
    glEnd();

    //roda bk kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(60, 24);
    glVertex2f(58, 22);
    glVertex2f(58, 18);
    glVertex2f(60, 16);
    glEnd();

    //roda dpn kiri
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(10, 50);
    glVertex2f(12, 48);
    glVertex2f(12, 44);
    glVertex2f(10, 42);
    glEnd();

    //roda bk kanan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(10, 24);
    glVertex2f(12, 22);
    glVertex2f(12, 18);
    glVertex2f(10, 16);
    glEnd();
}

void Car::moveRight(double x)
{
    glPushMatrix();
    glTranslated(car_x, car_y, 0.0);
    glPopMatrix();
}

void Car::moveLeft(double x)
{
    glPushMatrix();
    glTranslated(car_x, car_y, 0.0);
    this->draw();
    glPopMatrix();
}

void Car::Respawn()
{
    glPushMatrix();
    glTranslated(this->car_x, this->car_y, 0.0);
    this->draw();
    glPopMatrix();
}