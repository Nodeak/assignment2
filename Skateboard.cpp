/*
Mileage = A random number between 0.1 and 0.5 miles per minute. If time is more
	than 25 minutes and less than 250 minutes, add a random amount of mileage, ranging
	from to 1 to a third of the time’s value. Skateboard inherits from the Vehicle class.
*/

#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    srand(time);
    double mileage = rand() % (1/2) + (1/10);
    if( time > 25 && time < 250 ){
        double addedMileage = rand() % 1 + (time * (1/3));
        return mileage + addedMileage;
    }
    return mileage
}