#include<stdio.h>
#include <stdbool.h>



bool isPrime(int checknumber) 
{
	bool Prime = true;

	for(int a = 2; a < checknumber; a++)
	{
		if(checknumber%2 == 0)
		{
			Prime = false;
		}
	}

	return Prime;
}

void main () {



for (int a = 1; a < 1000; a++)
	{	
		if(isPrime(a))
					printf("a: %i ,", a);
				
	}

}



