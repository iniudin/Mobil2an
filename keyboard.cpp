#include "cross_platform/GLUT.hpp"

void keyBoardFunc(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_LEFT:
        carMoveLeft = true;
        carMoveRight = false;
        break;
    case GLUT_KEY_RIGHT:
        carMoveRight = true;
        carMoveLeft = false;
        break;
    case GLUT_KEY_UP:
        carMoveFast = true;
        break;
    }
}