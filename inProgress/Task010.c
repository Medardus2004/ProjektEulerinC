#include<stdio.h>
#include <stdbool.h>

bool isPrime(int checknumber) 
{
	bool Prime = true;

	for(int a = 2; a < checknumber; a++)
	{
		if(checknumber%a == 0)
		{
			Prime = false;
			break;
		}
	}
	return Prime;
}

void main () {

long largestnumber = 2000000;
long sumofprimes =0;

for (int a = 2; a < largestnumber; a++)
	{	
		if(isPrime(a))
		{
			sumofprimes += a;
		}
		printf("%i \n" , a); 
	}
	printf("Summe der Primzahlen kleienr %ld ist %ld ,", largestnumber , sumofprimes);
}



