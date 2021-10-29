#include<stdio.h>

int main()
{
    float temp_c,temp_f;
    
    printf("Enter a temperature in celsius:- ");
    scanf("%f",&temp_c);
    
    temp_f= (9/5.0 * temp_c)+32;
    
    printf("\nTemperature in fahrenheit %.2f",temp_f);
}
