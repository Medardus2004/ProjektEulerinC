#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>



int main(void)
{
    int numbercolumns = 15;
    int numberrows = 15;
    int grid[numbercolumns][numberrows+2];
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    int i = 0;
    int j = 0;

for(int row = 0; row < numberrows+2; row++)
     {
     for(int column = 0; column < numbercolumns; column++)
       {
        grid[column][row] = 0;
        }
        
     }

    fp = fopen("file_018.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        char * pch;
        pch = strtok (line," ,.-");
        j = 1;
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


 for(int column = numbercolumns-2; column >= 0; column--)
     {
     for(int row = 1; row < numberrows+1; row++)
       {
	if(grid[column+1][row] > grid[column+1][row+1] )
        	grid[column][row] += grid[column+1][row];
	else
		grid[column][row] += grid[column+1][row+1];
        }
     }

 for(int column = 0; column < numbercolumns; column++)
     {
     for(int row = 0; row < numberrows+2; row++)
       {
	printf("%i ",grid[column][row]);
        }
	printf("\n");
     }
printf(" \n Maximum total from top to bottom is %i \n", grid[0][1]);

}




