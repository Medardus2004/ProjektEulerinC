#include<stdio.h>

void main() 
{	
int c = 0;
int d = 0;
for(int a = 1; a <= 999; a++)
	{
		for(int b = 1; b <= 999; b++)
		{
			c = a*b;
			if(c/100000 == c%10)
			{ 
				d =c/10;
				if((d%10000)/1000 == d%10)
			{
				printf(" %i \n", c);
			}	
			} 
		}
	}
}
