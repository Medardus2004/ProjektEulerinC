#include<stdio.h>

void main () {
	int sum = 0;
	int numbers = 1000;

	for(int i = 1; i < 1000; i++)
	{
		if(i%10 == 1 &&  i%100 != 11)
			sum += 3;
                if(i%10 == 2 &&  i%100 != 12)
                        sum += 3;
                if(i%10 == 3 &&  i%100 != 13)
                        sum += 5;
                if(i%10 == 4 &&  i%100 != 14)
                        sum += 4;
		if(i%10 == 5 &&  i%100 != 15)
                        sum += 4;
                if(i%10 == 6 &&  i%100 != 16)
                        sum += 3;
                if(i%10 == 7 &&  i%100 != 17)
                        sum += 5;
                if(i%10 == 8 &&  i%100 != 18)
                        sum += 5;
		if(i%10 == 9 &&  i%100 != 19)
                        sum += 4;
                if(i%100 == 10)
                        sum += 3;
                if(i%100 == 11)
                        sum += 6;
                if(i%100 == 12)
                        sum += 6;
		if(i%100 == 13)
                        sum += 8;
                if(i%100 == 14)
                        sum += 8;
                if(i%100 == 15)
                        sum += 7;
                if(i%100 == 16)
                        sum += 7;
 		if(i%100 == 17)
                        sum += 9;
                if(i%100 == 18)
                        sum += 8;
                if(i%100 == 19)
                        sum += 8;

                if(i%100 >= 20 && i%100 < 30)
                        sum += 6;
                if(i%100 >= 30 && i%100 < 40)
                        sum += 6;
                if(i%100 >= 40 && i%100 < 50)
                        sum += 5;
                if(i%100 >= 50 && i%100 < 60)
                        sum += 5;
                if(i%100 >= 60 && i%100 < 70)
                        sum += 5;
                if(i%100 >= 70 && i%100 < 80)
                        sum += 7;
                if(i%100 >= 80 && i%100 < 90)
                        sum += 6;
                if(i%100 >= 90 && i%100 < 100)
                        sum += 6;


		if(i >= 100 && i%100 == 0)
			sum += 7;
                if(i >= 100 && i%100 != 0 )
                        sum += 10;


		if(i/100 == 1)
                        sum += 3;
                if(i/100 == 2)
                        sum += 3;
                if(i/100 == 3)
                        sum += 5;
                if(i/100 == 4)
                        sum += 4;
                if(i/100 == 5)
                        sum += 4;
                if(i/100 == 6)
                        sum += 3;
                if(i/100 == 7)
                        sum += 5;
                if(i/100 == 8)
                        sum += 5;
                if(i/100 == 9)
			sum += 4;	
	}
	printf(" %i   \n" , sum + 11);	
}
