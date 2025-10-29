#include <stdio.h>

/*
Name: Elsy Njambi Kambo
Reg No: PA106/G/29232/2025
Description: A program to input and display daily revenue of a hotel using 3D Array
*/

int main() {
    // Declare and initialize 3D Array
    int occupancy[3][5][10]; // 3 branches, 5 floors, 10 rooms
    int b, f, r;
    int occupied = 0;
    int vacant = 0;

    // Input occupancy data
    printf("Enter occupancy data (1 for occupied, 0 for vacant):\n");
    for (b = 0; b < 3; b++) {
        printf("Branch %d:\n", b + 1);
        for (f = 0; f < 5; f++) {
            printf("  Floor %d:\n", f + 1);
            for (r = 0; r < 10; r++) {
                printf("    Room %d: ", r + 1);
                scanf("%d", &occupancy[b][f][r]);
            }
        }
    }

    // Count occupied and vacant rooms
    for (b = 0; b < 3; b++) {
        for (f = 0; f < 5; f++) {
            for (r = 0; r < 10; r++) {
                if (occupancy[b][f][r] == 1)
                    occupied++;
                else
                    vacant++;
            }
        }
    }

    // Display results
    printf("\nTotal branches: %d\n", 3);
    printf("Occupied rooms: %d\n", occupied);
    printf("Vacant rooms: %d\n", vacant);

    return 0;
}