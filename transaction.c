//program to calculate and display the sales of transactions 
/* 
Name:Elsy Kambo 
Reg No:PA106/G/29232/25
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening sales.txt\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);
    printf("Total sales for the day: %.2f\n", total);
    return 0;
}