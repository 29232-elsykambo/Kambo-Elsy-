//Program to calculate fare that takes the distance covered in kilometres and as input and returns the total fare
/*
Name:Elsy Njambi Kambo 
Description:A C function to calculate fare
Reg No:PA106/29232/G/2025
*/
#include <stdio.h>

// Function to calculate total fare
int calculateFare(int distance) {
    int farePerKm = 50;
    int totalFare = distance * farePerKm;
    return totalFare;
}

int main(void) {
    int distance;

    printf("Enter distance traveled (in km): ");
    if (scanf("%d", &distance) != 1 || distance < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int fare = calculateFare(distance);
    printf("Total fare for %d km is KSh. %d\n", distance, fare);

    /* Example:
       Input: 10
       Output: Total fare for 10 km is KSh. 500
    */

    return 0;
}