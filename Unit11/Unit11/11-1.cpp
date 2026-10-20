// Julio Barros, E01963387 

#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <string.h>

int main ()
{	
	float base;
	float height;
	int input;
	float area;
	float radius;
	float pi = 3.14159;
	printf("Select an option to calculate it's area\n");
	printf("1)Square\n");
	printf("2)Rectangle\n");
	printf("3)Circle\n");
	scanf("%d", &input);
	if(input == 1){
		printf("please enter the value of base: ");
		scanf("%f",&base);
		area = base * base;
		printf("The Area of the Square is: %.2f m", area);
	}
	else if(input == 2){
		printf("please enter the value of base: ");
		scanf("%f",&base);
		printf("please enter the value of height: ");
		scanf("%f",&height);
		area = base * height;
		printf("The Area of the rectangle is: %.2f m", area);
	}
	else if(input == 3){
		printf("please enter the value of radius: ");
		scanf("%f",&radius);
		area = pi * pow(radius, 2);
		printf("The Area of the Circle is: %.2f m", area);
	}
	else{
		printf("You Entered an Invalid Number");
		printf("\n\nPress Enter to exit...\n");
		getche();
		return 0;
	}
		printf("\n\nPress Enter to exit...\n");
		getche();
		return 0;
}

