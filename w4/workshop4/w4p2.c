/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int keepShopping = 1;
    do
    {

        printf("Grocery Shopping\n");
        printf("================\n");
        int shopAppleNum = 0, shopOranageNum = 0, shopPearNum = 0,
            shopTomatoeNum = 0, shopCabbageNum = 0;

        // ask for needed apple number to shop for
        do
        {
            printf("How many APPLES do you need? : ");
            scanf("%d", &shopAppleNum);
            if (shopAppleNum < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
            {
                printf("\n");
            }
        } while (shopAppleNum < 0);
        // ask for needed oranges number to shop for
        do
        {
            printf("How many ORANGES do you need? : ");
            scanf("%d", &shopOranageNum);
            if (shopOranageNum < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
            {
                printf("\n");
            }
        } while (shopOranageNum < 0);
        // ask for needed pears number to shop for
        do
        {
            printf("How many PEARS do you need? : ");
            scanf("%d", &shopPearNum);
            if (shopPearNum < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
            {
                printf("\n");
            }
        } while (shopPearNum < 0);
        // ask for needed tomatoes number to shop for
        do
        {
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &shopTomatoeNum);
            if (shopTomatoeNum < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
            {
                printf("\n");
            }
        } while (shopTomatoeNum < 0);
        // ask for needed cabbages number to shop for
        do
        {
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &shopCabbageNum);
            if (shopCabbageNum < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
            {
                printf("\n");
            }
        } while (shopCabbageNum < 0);

        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n");
        printf("\n");
        int pickAppleSum = 0, pickOrangeSum = 0, pickPearSum = 0,
            pickTomatoeSum = 0, pickCabbageSum = 0;

        // handle picking apples
        if (shopAppleNum > 0)
        {
            while (pickAppleSum != shopAppleNum)
            {
                int pickApple = 0;
                printf("Pick some APPLES... how many did you pick? : ");
                scanf("%d", &pickApple);
                if (pickApple <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickApple + pickAppleSum > shopAppleNum)
                {
                    printf("You picked too many... only %d more APPLE(S) are needed.\n",
                           shopAppleNum - pickAppleSum);
                }
                else if (pickApple + pickAppleSum < shopAppleNum)
                {
                    pickAppleSum += pickApple;
                    printf("Looks like we still need some APPLES...\n");
                }
                else
                {
                    pickAppleSum += pickApple;
                    printf("Great, that's the apples done!\n");
                    printf("\n");
                }
            }
        }

        // handle picking oranges
        if (shopOranageNum > 0)
        {
            while (pickOrangeSum != shopOranageNum)
            {
                int pickOrange = 0;
                printf("Pick some ORANGES... how many did you pick? : ");
                scanf("%d", &pickOrange);
                if (pickOrange <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickOrange + pickOrangeSum > shopOranageNum)
                {
                    printf("You picked too many... only %d more ORANGE(S) are needed.\n",
                           shopOranageNum - pickOrangeSum);
                }
                else if (pickOrange + pickOrangeSum < shopOranageNum)
                {
                    pickOrangeSum += pickOrange;
                    printf("Looks like we still need some ORANGES...\n");
                }
                else
                {
                    pickOrangeSum += pickOrange;
                    printf("Great, that's the oranges done!\n");
                    printf("\n");
                }
            }
        }

        // handle picking pears
        if (shopPearNum > 0)
        {
            while (pickPearSum != shopPearNum)
            {
                int pickPear = 0;
                printf("Pick some PEARS... how many did you pick? : ");
                scanf("%d", &pickPear);
                if (pickPear <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickPear + pickPearSum > shopPearNum)
                {
                    printf("You picked too many... only %d more PEAR(S) are needed.\n",
                           shopPearNum - pickPearSum);
                }
                else if (pickPear + pickPearSum < shopPearNum)
                {
                    pickPearSum += pickPear;
                    printf("Looks like we still need some PEARS...\n");
                }
                else
                {
                    pickPearSum += pickPear;
                    printf("Great, that's the pears done!\n");
                    printf("\n");
                }
            }
        }

        // handle picking tomatoes
        if (shopTomatoeNum > 0)
        {
            while (pickTomatoeSum != shopTomatoeNum)
            {
                int pickTomatoe = 0;
                printf("Pick some TOMATOES... how many did you pick? : ");
                scanf("%d", &pickTomatoe);
                if (pickTomatoe <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickTomatoe + pickTomatoeSum > shopTomatoeNum)
                {
                    printf("You picked too many... only %d more TOMATO(ES) are needed.\n",
                           shopTomatoeNum - pickTomatoeSum);
                }
                else if (pickTomatoe + pickTomatoeSum < shopTomatoeNum)
                {
                    pickTomatoeSum += pickTomatoe;
                    printf("Looks like we still need some TOMATOES...\n");
                }
                else
                {
                    pickTomatoeSum += pickTomatoe;
                    printf("Great, that's the tomatoes done!\n");
                    printf("\n");
                }
            }
        }

        // handle picking cabbages
        if (shopCabbageNum > 0)
        {
            while (pickCabbageSum != shopCabbageNum)
            {
                int pickCabbage = 0;
                printf("Pick some CABBAGES... how many did you pick? : ");
                scanf("%d", &pickCabbage);
                if (pickCabbage <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickCabbage + pickCabbageSum > shopCabbageNum)
                {
                    printf("You picked too many... only %d more CABBAGE(S) are needed.\n",
                           shopCabbageNum - pickCabbageSum);
                }
                else if (pickCabbage + pickCabbageSum < shopCabbageNum)
                {
                    pickCabbageSum += pickCabbage;
                    printf("Looks like we still need some CABBAGES...\n");
                }
                else
                {
                    pickCabbageSum += pickCabbage;
                    printf("Great, that's the cabbages done!\n");
                    printf("\n");
                }
            }
        }

        printf("All the items are picked!\n");
        printf("\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &keepShopping);
        printf("\n");
        if (keepShopping == 0)
        {
            printf("Your tasks are done for today - enjoy your free time!\n");
            printf("\n");
        }
    } while (keepShopping != 0);
    return 0;
}