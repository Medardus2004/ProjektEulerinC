#include<stdio.h>
#include <stdbool.h>


void main () {

	int counter = 0;
	int coin[8];
	coin[0] = 200;
	coin[1] = 100;
	coin[2] =  50;
	coin[3] =  20;
	coin[4] =  10;
	coin[5] =   5;
	coin[6] =   2;
	coin[7] =   1;


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



