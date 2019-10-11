/*
 ============================================================================
 Author      : ulastheramanujan
 Description : Babylonian method for approximation of square root.
 Enter the real number which is in the square root then the program will
 give the approximation and the error term in decimal.
 
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float close_number(float n)
{
	for(int i=i;i<(n/2);i++)
	{
		if((i*i)>n)
		{
			return i-1;
		}
	}
	
}

int main()
{
	float n,close_num,error_term;
	scanf("%f",&n);
	close_num=close_number(n);
	
	for(int i=0;i<10;i++)
	{
		error_term=(n-(close_num*close_num))/(2*close_num);
		close_num=((n/close_num)+close_num)/2;
		
		
	}
	
	printf("Approximation : %f\n",close_num);
	printf("Square approximately = %f",error_term);
	
	
}
