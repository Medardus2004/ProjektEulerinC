#include<stdio.h>
#include<math.h>

void main () {
	int sum = 0;
	int number = 1000000;
	int digit[10];
	int number_to_investigate;
	int sum_of_fifth;

	for(int j = 100; j <= number; j++)
	{	
		sum_of_fifth = 0;
		number_to_investigate = j;
		for(int i = 0; i < 10 ;i++)
		{
			digit[i] = number_to_investigate % 10;
			sum_of_fifth += pow(digit[i], 5);
			number_to_investigate /= 10;
		}	
		
		if(sum_of_fifth == j)
			sum += j;
	}
	printf("the sum of all number that can be written as the sum of the fifth power of their digits is %i  . \n" , sum);	
}
