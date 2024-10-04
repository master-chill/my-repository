#include <stdio.h>

#define PI 3.142

int main() {
    float radius, height, surface_area;
    
    printf ("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    
    surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);
    
    printf("The sirface area of the cylinder is %.3f", surface_area);
    
    return 0;
}