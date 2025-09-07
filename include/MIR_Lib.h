#ifndef MIR_LIB_H
#define MIR_LIB_H

#include <Arduino.h>

class MIR
{
public:
    MIR(int pins[], int numPins);
    void begin();
    int *readAllSensors();

private:
    int *_pins;
    int _numPins;
};

#endif