/*
- A jet has an additional member data “numberOfEngines” (int). It is an integer with
	default value of 1.
- Mileage = A random number between 40 and 100 miles per minute. If the Jet has
	more than 2 engines and the fuel type is “Rocket”, the mileage will be boosted by
	5.5% per engine. Jet inherits from the PoweredVehicle class.
*/


#include "Jet.h"

Jet::Jet() {
    engineCount = 1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int engNum) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineCount(engNum);
}

Jet::~Jet() = default;

int Jet::getEngineCount() {
    return engineCount;
}

void Jet::setEngineCount(int engNum) {
    engineCount = engNum;

}

double Jet::mileageEstimate(double time) {
    srand(time);
    int randNum = rand() % 100 + 40;
    if(fuelType == "Rocket" && engineCount >= 2){
        return randNum + (randNum * (engineCount * 0.055));
    }
}