#include<stdio.h>

void main() 
{	
int sumofsquare = 0;
int squareofsum = 0;

for(int a = 1; a <= 100; a++)
	{
		sumofsquare += a*a;
	}
	

for(int a = 1; a <= 100; a++)
	{
		squareofsum += a;
	}
	squareofsum *= squareofsum;

	printf("sumofsquare: %i \n", sumofsquare);
	printf("squareofsum %i \n", squareofsum);
	printf("difference: %i \n", squareofsum - sumofsquare);
}
