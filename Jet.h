/*
- A jet has an additional member data “numberOfEngines” (int). It is an integer with
	default value of 1.
- Mileage = A random number between 40 and 100 miles per minute. If the Jet has
	more than 2 engines and the fuel type is “Rocket”, the mileage will be boosted by
	5.5% per engine. Jet inherits from the PoweredVehicle class.
*/

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


class Jet : public PoweredVehicle {

private:
    int engineCount;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numberOfEngines);

    virtual ~Jet();
    int getEngineCount();
    void setEngineCount(int numberOfEngines);
    virtual double mileageEstimate(int engNum);
};


#endif //DRIVINGSIMULATOR_CAR_H
