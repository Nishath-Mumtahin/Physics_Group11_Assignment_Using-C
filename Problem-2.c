#include <stdio.h>
#include <math.h>

int main() {
    double degrees = 45;
    double pi = 3.14159;
    double radians = degrees * pi / 180;
    double sinTheta = sin(radians);
    double ratio = 1 / sinTheta;

    printf("The ratio: a / lambda = %.3f\n", ratio);
    return 0;
}
