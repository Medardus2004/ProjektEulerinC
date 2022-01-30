#include<stdio.h>

void main () {
	int sum = 0;
	int number = 100;
	int sizeofarray = 290;
	int globalarrayfield[sizeofarray+1];

	for(int i = 0; i < sizeofarray+1; i++)
	{
		globalarrayfield[i] = 0;
	}

	for(int j = 1; j < sizeofarray+1; j++)
	{
		for(int i = 1; i < j ;i++)
		{
			if(j%i == 0)
			{
				globalarrayfield[j] += i;
			}
		}
	}	

	for(int counter = 1; counter < sizeofarray; counter++)
	{
		if(counter == globalarrayfield[globalarrayfield[counter]])
		{
			printf("%i \n", counter);
		}	
	}	
}




