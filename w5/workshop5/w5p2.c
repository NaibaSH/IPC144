/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
Full Name  : Naiba Shabanova
Student ID#: 
Email      : nshabanova8@myseneca.ca
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

#define LOG_DAYS 3

#define MIN_RATING 0.0
#define MAX_RATING 5.0

int main(void)
{
    printf("General Well-being Log\n");
    printf("======================\n");

    // Part 1
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

    // Part 2
    float morningTotalRating = 0.0f;
    float eveningTotalRateing = 0.0f;
    int i;
    for (i = 1; i <= LOG_DAYS; i++)
    {
        // handle and print log date
        {
            printf("%d", year);
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
            if (i >= 10)
            {

                printf("%d", i);
            }
            else
            {

                printf("0%d", i);
            }
            printf("\n");
        }

        float morningTempRating = 0.0f;
        float eveningTempRating = 0.0f;
        int flag = 1;
        while (flag)
        {
            printf("   Morning rating (0.0-5.0): ");
            scanf("%f", &morningTempRating);
            if (morningTempRating >= MIN_RATING && morningTempRating <= MAX_RATING)
            {
                flag = 0;
                morningTotalRating += morningTempRating;
            }
            else
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
        }
        flag = 1;
        while (flag)
        {
            printf("   Evening rating (0.0-5.0): ");
            scanf("%f", &eveningTempRating);
            if (eveningTempRating >= MIN_RATING && eveningTempRating <= MAX_RATING)
            {
                flag = 0;
                eveningTotalRateing += eveningTempRating;
            }
            else
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
        }
        printf("\n");
    }

    // Part 3
    printf("Summary\n");
    printf("=======\n");
    printf("Morning total rating: %6.3f\n", morningTotalRating);
    printf("Evening total rating: %6.3f\n", eveningTotalRateing);
    printf("----------------------------\n");
    printf("Overall total rating: %6.3f\n", morningTotalRating + eveningTotalRateing);
    printf("\n");
    printf("Average morning rating: %4.1f\n", morningTotalRating / LOG_DAYS);
    printf("Average evening rating: %4.1f\n", eveningTotalRateing / LOG_DAYS);
    printf("----------------------------\n");
    printf("Average overall rating: %4.1f\n", (morningTotalRating + eveningTotalRateing) / (LOG_DAYS * 2));
    printf("\n");
    return 0;
}