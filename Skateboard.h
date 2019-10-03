/*
Mileage = A random number between 0.1 and 0.5 miles per minute. If time is more
	than 25 minutes and less than 250 minutes, add a random amount of mileage, ranging
	from to 1 to a third of the time’s value. Skateboard inherits from the Vehicle class.
*/

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:

public:
    explicit Skateboard(string brand, string model);

    virtual ~Skateboard();
    virtual double mileageEstimate(double time);

};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
