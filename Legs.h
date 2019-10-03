/*
The average walking speed is around 3 miles per hour. The only other factor being implemented is going to be height.
To simplify the equations, the multiplier for height is going to be x0.75 for anything under 165cm and x1.25 for anyone over 185cm.

.05 miles per minute = 3 miles per hour
Mileage = 3 miles per hour. An additional height variable is going to be taken into account for the multiplier.
*/


#ifndef DRIVINGSIMULATOR_LEGS_H
#define DRIVINGSIMULATOR_LEGS_H

#include "Vehicle.h"

class Legs : public Vehicle {

private:
    int height;
    int avgSpeed = 3;
public:
    explicit Legs(string brand, string model, int height);
    virtual ~Legs();
    void setHeight(int h);
    virtual double mileageEstimate(double time);
};


#endif //DRIVINGSIMULATOR_LEGS_H
