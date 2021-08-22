#include<stdio.h>
#include <stdbool.h>


	
bool primechecker(int number)
	{
		bool isprime = true;

		for(int a = 2; a < number; a++)
		{
			if(number%a == 0)
			{
				isprime = false;
				break;
			}
		}
		return isprime;
	}

void main() 
	{	
	int counter = 0;
	int a = 2;
	while( counter  != 10001 )
		{
			if(primechecker(a))
			{
				counter++;
			}
			a++;
		}
			printf(" %ith prime is %i \n", counter, a-1);
	}


