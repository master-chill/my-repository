#include <stdio.h>

int main() {
    int principle, rate, time, simple_interest;
    
    printf("Enter the principle amount: ");
    scanf("%d", &principle);
    printf("Enter the rate of interest: ");
    scanf("%d", &rate);
    printf("Enter the time in years: ");
    scanf("%d", &time);
    
    simple_interest = principle * rate/100 * time;
    
    printf ("The simple interest is Ksh %d", simple_interest);
    
    return 0;
}