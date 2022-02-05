#include<stdio.h>

void main () {
	int sum = 0;
	int number = 100;
	int sizeofarray = 40000;
	int globalarrayfield[sizeofarray];

	for(int i = 0; i < sizeofarray; i++)
	{
		globalarrayfield[i] = 0;
	}

	for(int j = 1; j < sizeofarray; j++)
	{
		for(int i = 1; i < j ;i++)
		{
			if(j%i == 0)
			{
				globalarrayfield[j] += i;
			}
		}
	}	

	for(int counter = 1; counter < 10000; counter++)
	{
		if(counter == globalarrayfield[globalarrayfield[counter]] && counter != globalarrayfield[counter]  )
		{
			printf("%i \n", counter);
			sum += counter;
		}	
	}	
	printf(" The sum of all amicable numbers under 10000 %i", sum);


}
