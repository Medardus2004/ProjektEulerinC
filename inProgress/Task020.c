#include<stdio.h>

void main () {
	int sum = 0;
	int number = 100;
	int sizeofarray = 10000;
	int arrayfield[sizeofarray];
	arrayfield[0] = 0;
	arrayfield[1] = 1;
	for(int i =2; i < sizeofarray ;i++)
	{
		arrayfield[i] = 0;
	}
	
	for(int j = 1; j <= number; j++)
	{
		for(int i = 1; i < sizeofarray ;i++)
		{
			arrayfield[i] *= j;
			if(arrayfield[i-1] > 9)
			{
				arrayfield[i] += (arrayfield[i-1]/10) ;
 				arrayfield[i-1] %= 10;
			}
		}	
	}

	for(int i = 0; i < sizeofarray; i++)
	{
		sum += arrayfield[i];
	}

	printf("Die Quersumme von  %i ! ist %i . \n", number , sum);
	
}




