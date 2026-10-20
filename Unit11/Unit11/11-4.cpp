// Julio Barros — student ID redacted

#include <stdio.h>
#include <math.h>
#include <dos.h>
#include <string.h>
#include <conio.h>

int main()
{
  int n,i;
  float a[50],c[50], sum=0.0, mean;
  printf("Enter the total number of tempatures you want to convert: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
    printf("Enter the %d Fahrenheit value:" ,i);                 
    scanf("%f",&a[i]);
    sum=sum+a[i];
  }
  printf("\n\n  n    fahrenheit   Celsius\n");
  printf("--------------------------------\n");
   for(i=1; i<=n; i++){
	c[i]=(a[i] - 32) *5/9;
	
	printf("%d    %.2f   %.2f\n",i, a[i], c[i]);
  }
  mean=sum/n;
  printf("The mean of given numbers is %.2f\n",mean);
  getche();
  return 0;
}
