/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");
    printf("\n");

    char mode;
    int parameter;
    int count = 0;
    do
    {
        count = 0;
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &mode, &parameter);
        if (mode == 'D' || mode == 'W' || mode == 'F')
        {
            if (parameter < 3 || parameter > 20)
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            else if (mode == 'D')
            {
                printf("DO-WHILE: ");
                do
                {
                    count++;
                    printf("%c", mode);
                } while (count < parameter);
                printf("\n");
            }
            else if (mode == 'W')
            {
                printf("WHILE   : ");
                while (count < parameter)
                {
                    count++;
                    printf("%c", mode);
                }
                printf("\n");
            }
            else if (mode == 'F')
            {
                printf("FOR     : ");
                for (count = 0; count < parameter; count++)
                {
                    printf("%c", mode);
                }
                printf("\n");
            }
        }
        else if (mode == 'Q')
        {
            if (parameter != 0)
            {
                printf("ERROR: To quit, the number of iterations should be 0!\n");
            }
        }
        else
        {
            printf("ERROR: Invalid entered value(s)!\n");
        }

        printf("\n");
    } while (mode != 'Q' || parameter != 0);

    printf("+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");
    printf("\n");
    return 0;
}