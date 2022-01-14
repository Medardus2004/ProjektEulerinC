#include<stdio.h>
#include <string.h>

void main () {
	
	FILE *fp;
	char ch;
	int counter = 0;
	long multiplicator[12];
	long largest = 0;
   	long product = 1; 

	   /* Open file for both reading and writing */
   	fp = fopen("findNumber.txt", "r");
	
	if (fp == NULL)
    {
        printf("File is not available \n");
    }
    else
    {
        while ((ch = fgetc(fp)) != EOF)
        {
			multiplicator[counter%13] = (int)ch;
			multiplicator[counter%13] -= 48;

			if(counter >= 13)
			{
				for(int a = 0; a < 13; a++)
				{
					product *= multiplicator[a];
				}
			}
          
			if(product > largest)
			{
				largest = product;
	  			printf("%ld ", product);
			}
			product = 1;
			counter++;
        }
    }

    fclose(fp);

}



