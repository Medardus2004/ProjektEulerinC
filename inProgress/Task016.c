#include<stdio.h>

void main () {
	int sum = 0;
	int exponent = 1000;
	int arrayfield[333];
	arrayfield[0] = 0;
	arrayfield[1] = 1;
	for(int i =2; i<333;i++)
	{
		arrayfield[i] = 0;
	}
	
	for(int j = 1; j <= exponent; j++)
	{
		for(int i = 1; i < 333 ;i++)
		{
			arrayfield[i] *= 2;
			if(arrayfield[i-1] > 9)
			{
				arrayfield[i]++ ;
 				arrayfield[i-1] %= 10;
			}
		}	
	}

	for(int i = 0; i<333; i++)
	{
		sum += arrayfield[i];
	}

	printf("Die Quersumme von 2 hoch %i ist %i . \n", exponent , sum);
	
}




