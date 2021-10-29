#include <stdio.h>
#define PI 3.14
int main()
{
    float radius,diameter,area,circumference;
    printf("Enter Radius:- ");
    scanf("%f",&radius);
    diameter=2*radius;
    area=PI*radius*radius;
    circumference=2*PI*radius;
    
    printf("\nDiameter = %.2f \nArea = %.2f \nCircumference of Circle = %.2f", diameter,area,circumference);
    return 0;
}
