//A C program to store and input daily revenue of a hotel using 2D Array 
/*
Name:Elsy Njambi Kambo 
Reg No:PA106/G/29232/2025
Description:A program to input and display daily revenue of a hotel using 2D Array 
*/

int main ()
{
//declare and initialize 2D Array 
int f,r;
int occupied=0;
int vacant=0;
//for(start;stop;step)
for(f=0;f<5;f++){
for(r=0;r<10;r++){

if([f][r]=1)
occupied++;
else
vacant++;
}
}
 printf("floor:%d-occupied:%d, vacant:%d", floor, occupied, vacant);
 return 0 ;
 }