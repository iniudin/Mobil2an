#ifndef __CAR
#define __CAR
#include <string>

class Car
{
private:
    std::string color;

public:
    Car(const char *);
    int car_x,
        car_y;
    void draw();
    void Respawn();
    void moveRight(double x);
    void moveLeft(double x);
};
#endif