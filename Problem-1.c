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
        if (lambda >= 380 && lambda < 450)
            printf("Color: Violet\n");
        else if (lambda >= 450 && lambda < 485)
            printf("Color: Blue\n");
        else if (lambda >= 485 && lambda < 500)
            printf("Color: Cyan\n");
        else if (lambda >= 500 && lambda < 565)
            printf("Color: Green\n");
        else if (lambda >= 565 && lambda < 590)
            printf("Color: Yellow\n");
        else if (lambda >= 590 && lambda < 625)
            printf("Color: Orange\n");
        else if (lambda >= 625 && lambda <= 750)
            printf("Color: Red\n");

        double radians = theta * (pi / 180);
        m = ((d * 1000) * sin(radians)) / lambda;
        printf("Result: %.3lf-th order maxima\n", m);
    } 
    else {
        printf("Out of the range. Please enter a valid number.\n");
    }

    return 0;
}
