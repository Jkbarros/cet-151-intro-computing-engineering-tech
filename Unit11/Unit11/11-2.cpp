// Julio Barros — student ID redacted

#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <string.h>

int main ()
{	
	float fahrenheit;
	float celsius;
	float cf;
	int input;
	printf("Select an option\n");
	printf("1)Fahrenheit to Celsius\n");
	printf("2)Celsius to Fahrenheit\n");
	printf("3)Just want to exit the program\n");
	scanf("%d", &input);
	if(input == 1){
		printf("please enter the value of Fahrenheit: ");
		scanf("%f", &fahrenheit);
		celsius = ((fahrenheit - 32.0) *  5/9);
		printf("The tempature in celsius is: %.2f degrees", celsius);
	}
	else if(input == 2){
		printf("please enter the value of Celsius: ");
		scanf("%f",&celsius);
		fahrenheit = ((celsius * 9) / 5 ) + 32;
		printf("The tempature in fahrenheit is: %.2f degrees", fahrenheit);
	}
	else if(input == 3){
		return 0;
	}
	else{
		printf("You Entered an Invalid Number");
		printf("\n\nPress Enter to exit...\n");
		getche();
		return 0;
	}
	
}

