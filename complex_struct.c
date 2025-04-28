#include <stdio.h>
#include <math.h>

struct comp {
    float real;
    float imag;
}c1={3.0,2.0},c2={1.0,4.0};

int main() {
    //struct comp c1;
    //struct comp c2;

    //c1 = {3.0,2.0};
    //c2 = {1.0,4.0};
    float denominator;

    printf("\n");
    printf("Complex 1: %.2f + %.2fi\n",c1.real,c1.imag);

    printf("\n");
    printf("Complex 2: %.2f + %.2fi\n",c2.real,c2.imag);

    printf("\n");
    printf("Addition: ");
    printf("%.2f + %.2fi\n", c1.real + c2.real, c1.imag + c2.imag);

    printf("\n");
    printf("Subtraction: ");
    printf("%.2f + %.2fi\n",c1.real - c2.real, c1.imag - c2.imag);

    printf("\n");
    printf("Multiplication: ");
    printf("%.2f + %.2fi\n", c1.real * c2.real - c1.imag * c2.imag, c1.real * c2.imag + c1.imag * c2.real);

    printf("\n");
    printf("Division: ");
    denominator = c2.real * c2.real + c2.imag * c2.imag;
    printf("%.2f + %.2fi\n",(c1.real * c2.real + c1.imag * c2.imag) / denominator,(c1.imag * c2.real - c1.real * c2.imag) / denominator);

    printf("\n");
    printf("Magnitude of first complex number: %.4f\n", sqrt(c1.real * c1.real + c1.imag * c1.imag));

    printf("\n");
    printf("Magnitude of second complex number: %.4f\n", sqrt(c2.real * c2.real + c2.imag * c2.imag));

    printf("\n");
    return 0;
}