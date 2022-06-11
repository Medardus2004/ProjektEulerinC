#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>




/* Das Textfile muss zunächst Kommas durch Leerzeile ersetzt werden. 
 * Dies geht über den VIM comand  %s/\,/\r/g
 * Anschließend wird über die Commando-Zeile sortiert mit &> sort Names.txt --output=Task022_names_ordered_text.txt
 * */


int main(void)
{
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    int counter = 0;
    int wordvalue = 0;
    int totalcounter = 0;

    fp = fopen("Task022_names_ordered.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
	counter++;

	for (char *i = line; *i; ++i) {
		if(*i > 64 &&  *i < 91)	
		wordvalue += *i-64;
	}

	totalcounter += (wordvalue*counter);
	wordvalue = 0;	

    }

	printf("%i totalcounter \n", totalcounter);

    	fclose(fp);
    	if (line)
        free(line);
}
