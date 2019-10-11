/*
 ============================================================================
 Author      : ulastheramanujan
 Description : Newton's Method for decimal approximations of square numbers.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float close_number (float n)
{
	float j=1;
	for(int i=1;i<1000;i++)
	{
		if((i*i)>n)
		{
			return j;
		}
		j=i;
	}


}
int main(void) {
	float n,close_num,d,t,k;
	scanf("%f",&n);
	close_num=close_number(n);

	int i;
	for(i=0;i<10;i++)
	{
		d=n-(close_num * close_num);
		t=2*close_num;
		k=d/t;
		close_num=close_num+k;

	}

	printf("Approximation : %f\n",close_num);
	printf("Square approximately = %f",close_num*close_num);

return 0;
}

