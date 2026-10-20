#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <string.h>

int main()
{ 
int y;
int x;

printf("Enter two integers:");

printf("\nFirst integer: ");
scanf("%d",&y);

printf("Second integer: ");
scanf("%d",&x);

int sum=(y+x);
int difference=(y-x);
int multiplication=(y*x);
printf("\nResults: \nSum: %d \nDifference: %d \nMultiplication: %d",sum, difference, multiplication);
}
