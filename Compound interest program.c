#include <stdio.h>

#include <math.h>

int main() {
    double p, r, n, A;
    
    printf("Enter the principle amount: ");
    scanf("%lf", &p);
    printf("Enter the rate of interest: ");
    scanf("%lf", &r);
    printf("Enter the time in years: ");
    scanf("%lf", &n);
    
    A = p * pow((1 + r/100), n);
    
    printf ("The total amount after %.0lf years is Ksh %.0lf", n, A);
    
    return 0;
}