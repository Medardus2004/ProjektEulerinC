#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>



int main(void)
{
    int maxproduct;
    int grid[20][20];
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    int i = 0;
    int j = 0;

    fp = fopen("file_011.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        char * pch;
        pch = strtok (line," ,.-");
        j = 0;
	while (pch != NULL)
	{
        	grid[i][j] = strtol(pch, NULL, 10) ;
        	j++; 
		pch = strtok (NULL, " ,.-");
        }
	i++;
    }

    	fclose(fp);
    	if (line)
        free(line);

	maxproduct = 0;

   for(int column = 0; column < 20; column++)
     {
     for(int row = 0; row < 16; row++)
       {
         if(grid[column][row] * grid[column][row + 1] * grid[column][row + 2] * grid[column][row + 3] > maxproduct )
	{        
		maxproduct = grid[column][row] * grid[column][row + 1] * grid[column][row + 2] * grid[column][row + 3];
		printf("%i , %i , %i , %i \n", grid[column][row] , grid[column][row + 1] , grid[column][row + 2] , grid[column][row + 3]);
	}
	}
     }
 for(int row = 0; row < 20; row++)
     {
     for(int column = 0; column < 16; column++)
       {
         if(grid[column][row] * grid[column+1][row] * grid[column+2][row] * grid[column+3][row] > maxproduct )
	 {
        	maxproduct = grid[column][row] * grid[column+1][row] * grid[column+2][row] * grid[column+3][row];
		printf("%i , %i , %i , %i \n", grid[column][row] , grid[column+1][row] , grid[column+2][row] , grid[column+3][row]);
         }
 	}
     }
 for(int row = 0; row < 17; row++)
     {
     for(int column = 0; column < 17; column++)
       {
	if(grid[column][row] * grid[column+1][row+1] * grid[column+2][row+2] * grid[column+3][row+3] > maxproduct )        
	maxproduct = grid[column][row] * grid[column+1][row+1] * grid[column+2][row+2] * grid[column+3][row+3];
        }
     }

 for(int row = 3; row < 20; row++)
     {
     for(int column = 0; column < 17; column++)
       {
        if(grid[column][row] * grid[column+1][row-1] * grid[column+2][row-2] * grid[column+3][row-3] > maxproduct )
          maxproduct = grid[column][row] * grid[column+1][row-1] * grid[column+2][row-2] * grid[column+3][row-3];
        }
     }

    printf("The biggest Product of four digits is %i \n", maxproduct );


}
