//Program to convert temperature in Fahrenheit to Celsius 
/*
Name:Elsy Njambi Kambo
Reg No:PA106/29232/G/2025
Description:A c function to convert temperature in Fahrenheit to Celsius 
*/
#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main(void) {
    float fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    float celsius = convertToCelsius(fahrenheit);
    printf("%.2f°F = %.2f°C\n", fahrenheit, celsius);

    /* Example:
       Input: 98.6
       Output: 98.60°F = 37.00°C
    */

    return 0;
}