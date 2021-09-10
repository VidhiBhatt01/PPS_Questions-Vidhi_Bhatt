#include<stdio.h>
void main()
{
    float c, f;
    // celsius to fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f=(1.8*c)+32;
    printf("Temperature in Fahrenheit: %.2f \n\n", f);

    // fahrenheit to celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c-(f-32)*(0.55);
    printf("Temperature in Celsius: %.2f \n\n", c);

}
