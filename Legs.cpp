/*
The average walking speed is around 3 miles per hour. The only other factor being implemented is going to be height.
To simplify the equations, the multiplier for height is going to be x0.75 for anything under 165cm and x1.25 for anyone over 185cm.

.05 miles per minute = 3 miles per hour
Mileage = 3 miles per hour. An additional height variable is going to be taken into account for the multiplier.
*/

#include "Legs.h"

Legs::Legs(string brand, string model, int height) {
    setBrand(brand);
    setModel(model);
    setHeight(height);
}

Legs::~Legs() = default;


void Legs::setHeight(int h){
    height = h;
}

double Legs::mileageEstimate(double time) {
    if (height < 165){
        return avgSpeed *= 0.75;
    }
    else if(height > 185){
        return avgSpeed *= 1.25;
    }
    return time * avgSpeed;
}