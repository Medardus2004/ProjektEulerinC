#include<stdio.h>

void main() 
{	
	int j =1;
	int counter = 1;
	printf("%i. Fibonacci: %i \n", counter, j);
	for(int i = 1; counter < 12; i+=j)
	{
		counter++;
		printf("%i. Fibonacci: %i \n" , counter , i);
		
		j+=i;
		counter++;
		printf("%i. Fibonacci: %i \n", counter,  j);
	}
}	
