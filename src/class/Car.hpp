#ifndef __CAR
#define __CAR
#include <string>

class Car
{
private:
    std::string color;

public:
    Car(const char *);
    float car_x,
        car_y;
    void draw();
    void Respawn();
    void OtherRespawn(double x, double y);
};
#endif