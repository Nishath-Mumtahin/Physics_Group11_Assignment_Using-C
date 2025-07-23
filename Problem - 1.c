#include <stdio.h>
#include <math.h>

int main() {
    double lambda, theta, d, m;
    double pi = 3.14159;

    printf("Enter wavelength (in nanometers): ");
    scanf("%lf", &lambda);

    printf("Enter angle (in degrees): ");
    scanf("%lf", &theta);

    printf("Enter distance between slits (in micrometers): ");
    scanf("%lf", &d);

    if (lambda >= 380 && lambda <= 750) {
        double radians = theta * (pi / 180);
        m = (d * sin(radians)) / lambda;
        printf("Result: %.3lf-th order maxima\n", m);
    } else {
        printf("Out of the range. Please enter a valid number.\n");
    }

    return 0;
}
