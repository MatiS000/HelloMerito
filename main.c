/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

unsigned int DaysToMonthEnd(unsigned int day, unsigned int month)
{
    unsigned int daysToMonthEnd;
    unsigned int daysInMonth;
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysInMonth = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = 28;
            break;
    }
    
    return daysToMonthEnd =  daysInMonth - day;
}


int main()
{
    printf("Dni do konca miesiaca: %d", DaysToMonthEnd(6, 2));
	return 0;
}
