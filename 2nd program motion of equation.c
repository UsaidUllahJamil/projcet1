#include<stdio.h>
#include<conio.h>
void main ()
{

float s,vf,t,a,vi,a2s;
printf("\n ********************* motion of equation *******************");

printf("\n initial velocity = ");
scanf("%f",&vi);

printf("\n final velocity = ");
scanf("%f",&vf);

printf("\n acceleration = ");
scanf("%f",&a);

printf("\n time = ");
scanf("%f",&t);


vf=vi+a*t;
printf(" \n 1st motion of equation with final velocity = %f",vf);

s=vi*t+1/2*a*t*t;
printf("\n second motion of equation with distance = %f",s);

a2s=vf*vf-vi*vi;
printf("\n third motion of equation = %f",a2s);

getch();
}
