#include<stdio.h>

void main() 
{	

long sum = 600851475143;

	for(long i = 2; i <= sum; i++)
	{
		while(sum%i==0)
		{
			printf(" %ld \n", i);
			sum /= i;	
		}
		if(sum == 1) break;
	}
}	
