#include<stdio.h>

void main () {
	int counter = 1;
	int number_divisors = 0;
	int j = 2;	
//	for(int j = 2; j <= 10; j++)
	
	
	do {
		number_divisors = 0;
		for(int i = 1; i<= counter; i++)
		{
			if(counter%i == 0)
			{
				number_divisors++;
			}	
		}
		printf("the triangle number %i has %i divisors \n", counter, number_divisors);
		
		counter += j;
		j++;	
	} while(number_divisors < 500);
}




