// Write a program to calculate simple interest for a set of values representing principle, no of years, and rate of interest.

#include <stdio.h>

int main()
{
    int p, t, r;
    printf("Enter the principle amount \n");
    scanf("%d", &p);
    printf("Enter the time \n");
    scanf("%d", &t);
    printf("Enter the rate of interest \n");
    scanf("%d", &r);
    printf(" The interest of the amount %d in %d year(s) at an interest of %d percent per annum is %d \n", p, t, r, p * t * r / 100);

    return 0;
}