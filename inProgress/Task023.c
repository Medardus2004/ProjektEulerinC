#include<stdio.h>
#include <stdbool.h>


	
bool abundantchecker(int number)
	{
		int sum_properdivisor = 0;

		for(int i = 1; i < number; i++)
		{
			if(number%i == 0)
			{
				sum_properdivisor += i;
			}
		}

		if(sum_properdivisor > number)
			return true;
		else
			return false;
	}

void main() 
	{
	long sum_two_abundant = 0;

	for(int number = 1; number < 28124; number++)
	
		for(int a = 1; a <= number; a++)
		{
			if(abundantchecker(a) && abundantchecker(number-a))
			break;
			
			if(a == number)
			{
				printf("%i \n", number);
				sum_two_abundant += number;
			}			
		}
	printf("%ld is the sum of all positive integers which cannot be written as the sum of two abundant numbers \n", sum_two_abundant);
	}

