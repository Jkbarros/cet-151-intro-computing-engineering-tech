// Julio Barros — student ID redacted

#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <cmath>
#include <string.h>

int main()
{
  float vo, angle, ti, pi, g, ar, vxo, vyo, time_of_flight;
  float t, horizontal_distance, vertical_distance, vertical_velocity;
  printf("Project 11-3.c Projectile Motion (Time Series)\n\n");
  printf("Initial Velocity (vo): ");
  scanf("%f", &vo);
  printf("Angle (angle): ");
  scanf("%f", &angle);
  printf("Time Interval (ti): ");
  scanf("%f", &ti);
// calculation - 1st step
  g = 9.8067;
  pi= 4.0*atan(1);  // or use pi=M_PI;
  ar = angle*pi/180;
  vxo = vo * cos(ar);
  vyo = vo * sin(ar);
  time_of_flight = 2 * vo*sin(ar)/g;  
  printf("--- Input Information ----------------- \n");
  printf("Initial Velocity Vo = %.2f \n", vo);
  printf("Angle in degree angle = %.2f \n", angle);
  printf("Time Interval ti = %.2f \n", ti);
  printf("---------------------------------------\n");
  printf("Angle in Radian ar = %.2f \n", ar);
  printf("Horizontal Velocity vxo = %.2f \n", vxo);
  printf("Vertical Velocity vyo = %.2f \n", vyo);
  printf("Time of Flight = %.2f \n", time_of_flight);
  printf("*** Press any Key to continue ...");
  getche();
// calculation - 2nd step  
  printf("\n\n  t    hor_dis  ver_dis  ver_vel\n");
  printf("--------------------------------\n");
  for (t=0;t<=time_of_flight+ti;t=t+ti)
  {
    horizontal_distance = vxo * t;
    vertical_distance =  ((vyo * t )- 0.5 * g * pow(t, 2));
    vertical_velocity = vyo-(g*t);
 
    printf("%.2f    %.2f    %.2f    %.2f\n", t, horizontal_distance, vertical_distance, vertical_velocity);
  }
  printf("\n\nPress Enter to exit ...\n");
  getche();
}
