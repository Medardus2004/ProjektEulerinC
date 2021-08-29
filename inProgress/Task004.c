#include<stdio.h>

void main() 
{	
int c = 0;
int d = 0;
int largest = 0; 
for(int a = 100; a <= 999; a++)
	{
		for(int b = 100; b <= 999; b++)
		{
			c = a*b;
			if(c/100000 == c%10)
			{ 
				d =c/10;
				if((d%10000)/1000 == d%10  && largest < c)
			{
				largest = c;
				printf(" %i \n", c);
			}	
			} 
		}
	}
}
