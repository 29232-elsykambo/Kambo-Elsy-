//Program that takes the units of electricity consumed and returns the bill
/* 
Name: Elsy Njambi Kambo 
Reg No:PA106/G/29232/2025
Description:A program to find the total electricity bill using functions 
*/
#include <stdio.h>



int calculateElectricBill(int units) {
    if (units <= 0) return 0;

    int bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    return bill;
}

int main(void) {
    int units;
    printf("Enter number of units consumed: ");
    if (scanf("%d", &units) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int total = calculateElectricBill(units);
    printf("Total bill for %d unit(s) is KSh. %d\n", units, total);

    /* Example check:
       Input: 250
       Output: Total bill for 250 unit(s) is KSh. 3500
    */

    return 0;
}