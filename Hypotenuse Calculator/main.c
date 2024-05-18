#include <stdio.h>
#include <math.h>

int main()
{
    float a = 0, b = 0, hypotenuse = 0;

    printf("Enter A: ");
    scanf(" %f", &a);
    printf("Enter B: ");
    scanf(" %f", &b);

    hypotenuse = sqrt(pow(a, 2) + pow(b, 2));
    printf("\nHypotenuse: %.2f\n", hypotenuse);

    return 0;
}
