
// Double slit diffraction Order Indicator

#include <stdio.h>
#include <math.h>

int main() {
    double lambda, theta, d, m;

    // Taking user input
    printf("Enter wavelength (nm): ");
    scanf("%lf", &lambda);

    // Checking if the wavelength is within range
    if (lambda < 380 || lambda > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }
 char* color;
    if (lambda>= 380 && lambda < 450)
        color = "violet";
    else if (lambda >= 450 && lambda< 485)
        color = "blue";
    else if (lambda >= 485 && lambda < 500)
        color = "cyan";
    else if (lambda >= 500 &&lambda < 565)
        color = "green";
    else if (lambda >= 565 && lambda< 590)
        color = "yellow";
    else if (lambda >= 590 && lambda < 625)
        color = "orange";
    else
        color = "red";

    printf("Light color: %s\n", color);
    printf("Enter angle (degrees): ");
    scanf("%lf", &theta);

    printf("Enter slit separation (μm): ");
    scanf("%lf", &d);

    // Convert units
    lambda = lambda * 1e-9; // Convert nm to meters
    d = d * 1e-6; // Convert μm to meters
    theta = theta * (M_PI / 180.0); // Convert degrees to radians

    // Calculate order of maxima
     m = floor ((d * sin(theta)) / lambda);
     printf("%d-th order maxima\n",(int) m);
  

    return 0;
}
