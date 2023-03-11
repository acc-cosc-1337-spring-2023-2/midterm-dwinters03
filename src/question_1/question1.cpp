#include "question1.h"

bool test_config()
{
    return true;
}

double get_kinetic_energy(double kilograms, double velocity)
{
    double kinetic_energy = 0.5 * (kilograms) * (velocity * velocity);
    return kinetic_energy;
}
