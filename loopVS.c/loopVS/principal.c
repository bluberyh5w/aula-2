#include <stdio.h>

int main() 
{
	int i = 0;
	int n1[10];
	
	while (i<10)
	{
		n1[i] = i;
		printf("n1[%d]=%d\n", i, n1[i]);
		
		++i;
	}
	
	return 0;

	}
	


