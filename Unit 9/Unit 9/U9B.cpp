#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <string.h>

int main()
{ 
int a;
int b;

printf(" Enter the value of a:");
scanf("%d",&a);
printf(" Enter the value of b: ");
scanf("%d",&b);
int X=(pow(a,2)*b+pow(a,3)-pow(b,2));
printf("The value of X: %d",X);
int Y=(pow(a,4)*pow(b,3)+((pow(a,3)*pow(b,2))));
printf("\nThe value of Y: %d",Y);

}
