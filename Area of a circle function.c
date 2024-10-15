// Function for finding the area of a circle
#include <stdio.h>
#include <math.h>
#define ? 3.14286

float getRadius ();
float calculateArea (float radius);
int main() {
    float radius, area;
    
    radius = getRadius ();
    
    area = calculateArea(radius);
    
    printf("The area of a circle with radius %.0f is %.0f", radius, area);
    
    return 0;
}
float getRadius() {
    float radius;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    return radius;
}

float calculateArea (float radius) {
    return ? * radius * radius;

}