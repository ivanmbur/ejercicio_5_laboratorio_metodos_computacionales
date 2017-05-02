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
		if(x*x + y*y <= 1)
		{
			count ++;
		}
	}
	printf("El valor de la constante pi es: %f\n", (float)4*count/n_points);
}
