#include <stdio.h>

float convertToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = convertToFahrenheit(celsius);

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
