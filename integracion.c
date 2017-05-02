#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
	int n_points = 1000000;
	int count = 0;
	float x;
	float y;
	int i;
	for(i=0; i<n_points; i++)
	{
		x = (float)rand()/RAND_MAX;
		y = (float)rand()/RAND_MAX;
		if(y <= exp(-(double)x))
		{
			count ++;
		}
	}
	printf("El valor de la integral es: %f\n", (float)count/n_points);
}
