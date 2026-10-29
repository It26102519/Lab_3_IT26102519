#include <stdio.h>
 
#define GRAVITATIONAL_CONSTANT 9.80
#define EFFICIENCY 0.9
#define WATER_MASS_PER_CUBIC_METER 1000.0
#define WATTS_PER_MEGAWATT 1000000.0
 
int main(void) {
    double height, flow_rate, mass, work, power_watts, power_megawatts;
 
    printf("Enter the height of the dam (m): ");
    scanf("%lf", &height);
 
    printf("Enter the water flow (cubic meters per second): ");
    scanf("%lf", &flow_rate);
 
    mass = flow_rate * WATER_MASS_PER_CUBIC_METER;
    work = mass * GRAVITATIONAL_CONSTANT * height;
    power_watts = EFFICIENCY * work;
    power_megawatts = power_watts / WATTS_PER_MEGAWATT;
 
    printf("Power produced: %.2f MW\n", power_megawatts);
 
    return 0;
}
