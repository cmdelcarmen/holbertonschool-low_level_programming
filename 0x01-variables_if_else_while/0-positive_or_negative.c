#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n==0) {
	    printf("%d is 0.", n);
	}
	
	else if (n>0)
	{
	    printf("%d is 0.", n);
	}
	
	else
	{   
	    printf("%d is 0.", n);
	}
	 
	return (0);
}
