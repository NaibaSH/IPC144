/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
Full Name  : Naiba Shabanova
Student ID#: 
Email      : nshabanova@myseneca.ca
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(void)
{
    printf("General Well-being Log\n");
    printf("======================\n");

    const int JAN = 1;
    const int DEC = 12;
    int year, month;
    int flag = 1;
    while (flag)
    {
        year = 0;
        month = 0;
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);

        flag = 0;
        if (year < MIN_YEAR || year > MAX_YEAR)
        {
            flag = 1;
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        if (month < JAN || month > DEC)
        {
            flag = 1;
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
    }

    printf("\n");
    printf("*** Log date set! ***\n");
    printf("\n");

    printf("Log starting date: %d", year);
    printf("-");
    switch (month)
    {
    case 1:
        printf("JAN");
        break;
    case 2:
        printf("FEB");
        break;
    case 3:
        printf("MAR");
        break;
    case 4:
        printf("APR");
        break;
    case 5:
        printf("MAY");
        break;
    case 6:
        printf("JUN");
        break;
    case 7:
        printf("JUL");
        break;
    case 8:
        printf("AUG");
        break;
    case 9:
        printf("SEP");
        break;
    case 10:
        printf("OCT");
        break;
    case 11:
        printf("NOV");
        break;
    case 12:
        printf("DEC");
        break;
    default:
        break;
    }
    printf("-");
    printf("01");
    printf("\n");
    printf("\n");
    return 0;
}