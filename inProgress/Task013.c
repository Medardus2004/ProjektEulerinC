#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>



int main(void)
{

	// grid[row][column]

    int grid[100][53];
	 for(int column = 0; column < 53; column++)
     {
     for(int row = 0; row < 100; row++)
        {
                grid[row][column] = 0;
        }
    }

    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    int j = 0;
    int rest = 0;
    int result[53];

    fp = fopen("file_013.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {

	for( int i = 0; i < 50; i++)
 		{
			grid[j][i+3] = line[i] - 48;
		}
		j++;
    }

    	fclose(fp);
    	if (line)
        free(line);


   for(int row = 0; row < 100; row++)
     {
     for(int column = 0; column < 53; column++)
       	{
		printf("%i ", grid[row][column] );
	}
	printf("\n");
    } 
	printf("\n \n Das Ergebnis ist:\n ");




     for(int column = 52; column >=0 ; column--)
        {
	for(int row = 0; row < 100; row++)
     		{
                result[column] +=  grid[row][column] ;
        	}

 	result[column] += rest;
        rest = result[column]/10;
        result[column] %= 10;
    }

   for(int i= 0;i < 53; i++ )
	printf("%i",result[i] ); 
 }
