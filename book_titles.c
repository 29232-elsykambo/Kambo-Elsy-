//program to keep track of borrowed books each day 
/*
Name:Elsy Kambo 
Reg No:PA106/G/29232/25
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[256];

    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening borrowed_books.txt\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);

    fprintf(file, "%s", title);
    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt\n");
    return 0;
}