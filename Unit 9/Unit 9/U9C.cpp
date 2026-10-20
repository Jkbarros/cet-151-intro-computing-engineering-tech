#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <string.h>

int main ()
{
	int b;
	int h;
	printf("Value of base: ");
	scanf("%d",&b);
	printf("\nValue of height: ");
	scanf("%d",&h);
	int P=(b+b+h+h);
	int A=(b*h);
	printf("\nValue of Perimeter: %d",P);
	printf("\nValue of Area: %d",A);
		
}

