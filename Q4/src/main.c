#include <stdio.h>
#define max_digi 32

int main() //tentei... :(
{
	int x[max_digi] = {0}, y[max_digi] = {[0 ... max_digi-1] = 1}, z[max_digi] = {0};
	int i;

	for(i = 0; i < 20; i++)
	{
		int s;
		for(s = max_digi-1; s >= 2; s--)
		{
			x[s] += y[s] + z[s];
			
			if(x[s] > 9)
			{
				x[s] = x[s] - 10;
				x[s-1] = 1;
			}
			else
				x[s-1] = 0;
				
			y[s] = z[s];
			z[s] = x[s];
			
			//printf("%d", x[s]);
		}
		
		//printf("\n");
		for(s = 0; s < max_digi; s++)
			printf("%d", x[s]);
		printf("\n");
	}
}