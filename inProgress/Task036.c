#include<stdio.h>
#include <stdbool.h>
#include<stdlib.h>
#include <math.h>
	
bool palindromchecker(int number)
	{
	}

long binaryconverter(int number)
	{
	int array[20];
	long binary = 0;	
	
	for(int i=0;number>0;i++)    
		{    
		array[i]=number%2;    
		number /= 2;    
		binary += array[i]*pow(10,i);
		}
	return binary;
	}


void main() 
	{
	for(int i = 1; i < 1000000; i++)
	 printf("%i is in binary %ld \n", i ,binaryconverter(i));	
	}


