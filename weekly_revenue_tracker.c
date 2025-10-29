//A C program to store and input daily revenue of a hotel using 1D Array 
/*
Name:Elsy Njambi Kambo 
Reg No:PA106/29232/G/2025
Description:A program to input and display daily revenue of a hotel using 1D Array 
*/

int main ()
{
//declare and initialize 1D Array 
int i;
float total=0.0, average;
int revenue [7];
printf("Weekly revenue tracker\n");
printf("_______________________\n");

//Prompt the user to enter the daily revenue 
for(i=0;i<7;i++){
printf("Enter the daily revenue %d:\n", i +1);
scanf("%f", &revenue[i]);
total += revenue[i] ;
}
average =total/7.0;

//Display the total and average revenue 
printf("total weekly revenue is : %.2f\n",total);
printf("average daily revenue is : %.2f\n", average);

return 0 ;
}