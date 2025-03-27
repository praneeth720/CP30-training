#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    char b;
    float c;
    double d;

    printf("Enter the integer value: ");
    scanf("%d", &a);

    printf("Enter the character value: ");
    scanf(" %c", &b); 

    printf("Enter the float value: ");
    scanf("%f", &c);

    printf("Enter the double value: ");
    scanf("%lf", &d);

    printf("Size of int a: %zu bytes\n", sizeof(a));
    printf("Size of char b: %zu bytes\n", sizeof(b));
    printf("Size of float c: %zu bytes\n", sizeof(c));
    printf("Size of double d: %zu bytes\n", sizeof(d));
    return 0;
}