/*
 ============================================================================
 Name        : buffon's needle
 Author      : ulas
 Version     : v.1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

int main(void) {
	int N;
	printf("Enter a number bigger than 5.000.000 and less then 20.000.000\n");
	scanf("%d",&N);
	int x_direction;
	int y_direction;
	int needle_length=100;
	int acute_theta;
	int cross_sum=0;
	int distance;
	float appr_PI;

	for (int i=0;i<N;i++)
	{
	//Defining the needle's coordinates and the angle it makes
	x_direction= rand() % 600;
	y_direction= rand() % 600;
	acute_theta= rand() % 90;
	if(abs(400-y_direction) < abs(y_direction-200))
	{
		distance=400-y_direction;

	}
	else
	{
		distance=y_direction-200;

	}
	if(abs(distance)<=50*sin(acute_theta))
	{
		cross_sum++;
	}

	}
	cross_sum=cross_sum*3;
	appr_PI=(double)N/(double)cross_sum;


	printf("Needle thrown %d times and it bisects the line %d time so the %lf is the PI\n",N,cross_sum,appr_PI);
	float error_term=(PI-appr_PI)/PI;
	printf("The result is with %%%f error",error_term);
	
	

}

