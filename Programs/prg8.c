
//porgram to get square root of given number
#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    double v;

    printf("Enter a Number: ");
    scanf("%d", &n);

    v = sqrt(n);

    printf("Square Root of %d is %f", n, v);
}