// The Order Indicator
#include <stdio.h>
#include <math.h>

int main() {
    double theta = 45.0;
    double m = 1.0;       
    double sin_theta = sin(theta * M_PI / 180.0); 
    double ratio = m / sin_theta;

    printf("The ratio of slit width to wavelength (a/λ) is: %.3f\n", ratio);
    return 0;
}




