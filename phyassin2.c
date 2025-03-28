
#include <stdio.h>
#include <math.h>

int main() {
    // Given angle for first diffraction minimum
    double theta = 45.0;  // degrees

    // Convert angle to radians
    double theta_radians = theta * M_PI / 180.0;

    // Calculate the ratio of slit width to wavelength
    // For first minimum: sin(θ) = λ / a
    // Rearranging: a/λ = 1 / sin(θ)
    double ratio = 1.0 / sin(theta_radians);

    // Print the result
    printf("The ratio of slit width (a) to wavelength (λ) for the first ");
    printf("diffraction minimum at θ = %.1f° is: %.4f\n", theta, ratio);

    return 0;
}
