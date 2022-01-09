#include<stdio.h>

void main () {

int max_number  = 1000000;
long iteration;
long test_number;
int counter_biggest_iteration;
long biggest_iteration = 1;


for (int counter = 2; counter <= max_number; counter++)
	{	
	iteration = 0;
	test_number = counter;	
	while(test_number != 1)
		{
		if(test_number%2 == 0)
			{
				test_number = test_number / 2;
				iteration++;
			}
		else 
			{
				test_number = 3*test_number +1;
				iteration++;
			}
		if(iteration>biggest_iteration)
			{
			biggest_iteration = iteration;
			counter_biggest_iteration = counter;
			}	
		}	
	printf("Für die Zahl %i braucht man %ld Iterationen. \n", counter , iteration);
	}
printf(" \n \n Die meisten Iterationen hat man für %i. \n Man braucht  %ld Iterationen. \n",counter_biggest_iteration, biggest_iteration);
}




