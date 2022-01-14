#include<stdio.h>
#include <stdbool.h>


	
bool primechecker(int number)
	{
		bool isprime = true;


		if(number  <= 0)
                        {
                                isprime = false;
                        }

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
	
	int to_examine = 0;
	int maximum_of_primes = 0;
	int n;
	int counter = 0;
	int supera;
	int superb;

	for(int a = -999; a < 1000; a ++)
        {
		for(int b = -999; b <= 1000; b ++)
        	{
			n = 0;
			while(primechecker(n*n + a*n +b))
			{
				if (a == -61 && b == 971)
				{
					printf("%i : %i \n",counter, n*n + a*n +b);
				}
			        counter++;		
				n++;
			}
			if(counter > maximum_of_primes)
			{
				maximum_of_primes = counter; 
				supera = a;
				superb = b;
			}
			counter = 0;
		}
//		printf("a = %i  ", a);
	}
	
	printf("a = %i und b = %i \n Es ergeben sich %i Primzahlen", supera, superb, maximum_of_primes);
}


