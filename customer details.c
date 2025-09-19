#include<stdio.h>
/*
Name:Elsy Kambo
Reg.No:PA106/29232/25
Description: Program to prompt the user to enter and display their height,ID number and bank balance
*/

int main()
{
int height;
    printf("enter your height: "); 
    scanf("%d", &height);
    printf("your height is %d",height);
    
int id_number;
    printf("enter your id_number: ");
    scanf("%d", &id_number);
    printf("your id_number is %d",id_number);
    
double bank_balance;
    printf("enter your bank_balance: ");
    scanf("%lf, &bank_balance");
    printf("your bank_balance is %lf",bank_balance);
    return 0;
    }