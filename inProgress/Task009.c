#include<stdio.h>
#include <stdbool.h>

void main () {

int c;

for (int a = 1; a < 1000; a++)
	{	
		for(int b=1; b < 1000; b++)
		{
			c = 1000 - (a + b);	
				if(a*a + b*b == c*c && c > 0)
				{
					printf("a: %i ,", a);
					printf("b: %i ,", b);
					printf("c: %i ,", c);
					printf("abc: %i ,", a*b*c);
				}
			
		}
	}

}



