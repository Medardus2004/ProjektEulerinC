#include<stdio.h>

void main() 
{	
	int sum = 0;
	int j =1;

	for(int i = 1; i <4000000; i+=j)
	{
		if(i%2==0)
		{
			sum += i;	
		}
		j+=i;
		if(j%2==0)
		{
			sum += j;	
		}
	}
	printf(" %i \n", sum);
}	
