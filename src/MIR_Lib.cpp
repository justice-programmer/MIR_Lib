#include "MIR_Lib.h"

MIR::MIR(int pins[], int numPins)
{
    _pins = pins;
    _numPins = numPins;
}

void MIR::begin()
{
    for (int i = 0; i < _numPins; i++)
    {
        pinMode(_pins[i], INPUT);
    }
}

int *MIR::readAllSensors()
{
    int *values = new int[_numPins];
    for (int i = 0; i < _numPins; i++)
    {
        values[i] = analogRead(_pins[i]);
    }
    return values;
}
// Add this closing brace to end the MIR class implementation