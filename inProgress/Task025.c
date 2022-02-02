#include<stdio.h>

void main() 
{	
	int einsgemerkt = 0;
	int counter = 3;
	int i[1000];
	int j[1000];
	for(int k = 0; k < 1000; k++)
	{
		i[k] = 0;
		j[k] = 0;
	}	
	j[0] = 1; 
	i[0] = 1;
	while(counter < 10000)
	{
		for(int k = 0; k < 1000; k++)
		{
			i[k] += j[k]+einsgemerkt;
			if(i[k] > 9)
				{
				i[k] %= 10;
				einsgemerkt = 1;
				}
			else
				{		
				einsgemerkt = 0;
				}	
		
			if(i[999] != 0)
			{
				printf("%i \n" , counter);
				counter = 10001;
				break;
			}
		}
		counter++;

		printf("\n");
		for(int k = 0; k < 1000 ; k++)
		{
			j[k] += i[k]+einsgemerkt;			
			if(j[k] > 9)
				{
				j[k] %= 10;
				einsgemerkt = 1;
				}
			else
				{
				einsgemerkt = 0;
				}
			if(j[999] != 0)
			{
				printf("%i \n", counter);
				counter = 10001;
				break;
			}
		}
		counter++;
		printf("\n");
	}
}	
