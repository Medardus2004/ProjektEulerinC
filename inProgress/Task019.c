#include<stdio.h>

void main () {
	int sum_sunday = 0;
	int day_of_week = 2;
	

	int month[12];
	month[0] = 31; 		// january
	month[1] = 28;		// february
	month[2] = 31;		// march
	month[3] = 30;		// april
	month[4] = 31; 		// may
	month[5] = 30;		// june
	month[6] = 31; 		// july
	month[7] = 31; 		// august
	month[8] = 30; 		// septembre
	month[9] = 31; 		// octobre
	month[10] = 30;		// novembre
	month[11] = 31;		// decembre

	for(int year = 1901; year < 2001 ; year++)
	{
		if(year % 4 == 0)
			month[1] = 29;
		else
			month[1] = 28;
		
		for(int month_count = 0 ; month_count < 12; month_count++)
			{
				if(day_of_week % 7 == 0)
					sum_sunday++;
			
				day_of_week += month[month_count];	
			}
	}
	

	printf("The 20th century had %i sundays. \n", sum_sunday);
	
}




