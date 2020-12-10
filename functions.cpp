#include "cross_platform/GLUT.hpp"
#include <iostream>

void drawText(std::string text, void *font, int x, int y)
{
    // https://stackoverflow.com/questions/14318/using-glut-bitmap-fonts
    glPushMatrix();
    glRasterPos2i(x, y);
    for (std::string::iterator i = text.begin(); i != text.end(); ++i)
    {
        char c = *i;
        glutBitmapCharacter(font, c);
    }
    glPopMatrix();
}

void drawMainMenu()
{
    drawText("Pencet enter untuk memulai permainan", GLUT_BITMAP_TIMES_ROMAN_24, 200, 600);
    // gambar main menu disini
}