#ifndef __Functions
#define __Functions

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>
#include <fstream>

void drawText(std::string text, void *font, int x, int y, double R, double G, double B)
{
    // https://stackoverflow.com/questions/14318/using-glut-bitmap-fonts
    glPushMatrix();
    glColor3ub(R, G, B);
    glRasterPos2i(x, y);
    for (std::string::iterator i = text.begin(); i != text.end(); ++i)
    {
        char c = *i;
        glutBitmapCharacter(font, c);
    }
    glPopMatrix();
}
void drawBox(int x1, int y1, int x2, int y2, double R, double G, double B)
{
    glColor3ub(R, G, B);
    glBegin(GL_QUADS);
    glVertex2f(x1, y1); // kiri bawah
    glVertex2f(x1, y2); // kiri atas
    glVertex2f(x2, y2); // kanan atas
    glVertex2f(x2, y1); // kanan bawah
    glEnd();
}

void saveNewHighScore(int newScore)
{
    std::string highScore = std::to_string(newScore);
    std::ofstream myfile("/home/eesyee/Github/Mobil2an/highscore.txt");
    if (myfile.is_open())
    {
        myfile << highScore;
        myfile.close();
    }
    else
        std::cout << "Unable to open file";
}

int getHighScore()
{
    int highScore;
    std::string line;
    std::ifstream myfile("/home/eesyee/Github/Mobil2an/highscore.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            highScore = std::stoi(line);
        }
        myfile.close();
    }
    else
        std::cout << "Unable to open file";
    return highScore;
}

#endif
