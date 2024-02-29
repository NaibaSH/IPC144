/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    char CoffeeType1, CoffeeType2, CoffeeType3,
        CreamWithCoffee1, CreamWithCoffee2, CreamWithCoffee3,
        customerCoffeeType, customerCream;

    int packageWeight1, packageWeight2, packageWeight3, dailyServing;


    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");

    printf("Enter the coffee product information being sold today...\n\n");

    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c",&CoffeeType1);

    printf("Bag weight (g): ");
    scanf("%d",&packageWeight1);

    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&CreamWithCoffee1);

    
    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &CoffeeType2);
    printf("Bag weight (g): ");
    scanf("%d", &packageWeight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &CreamWithCoffee2);

    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &CoffeeType3);
    printf("Bag weight (g): ");
    scanf("%d", &packageWeight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &CreamWithCoffee3);
    
    printf("\n");
    
    printf("---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (CoffeeType1 == 'l'|| CoffeeType1 == 'L'),(CoffeeType1 == 'm' || CoffeeType1 == 'M'),(CoffeeType1 == 'r' || CoffeeType1 == 'R'),packageWeight1, packageWeight1/GRAMS_IN_LBS, (CreamWithCoffee1 == 'Y'|| CreamWithCoffee1 =='y'));
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (CoffeeType2 == 'l' || CoffeeType2 == 'L'), (CoffeeType2 == 'm' || CoffeeType2 == 'M'), (CoffeeType2 == 'r' || CoffeeType2 == 'R'), packageWeight2, packageWeight2 / GRAMS_IN_LBS, (CreamWithCoffee2 == 'Y' || CreamWithCoffee2 == 'y'));
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n\n", (CoffeeType3 == 'l' || CoffeeType3 == 'L'), (CoffeeType3 == 'm' || CoffeeType3 == 'M'), (CoffeeType3 == 'r' || CoffeeType3 == 'R'), packageWeight3, packageWeight3 / GRAMS_IN_LBS, (CreamWithCoffee3 == 'Y' || CreamWithCoffee3 == 'y'));

    printf("Enter how you like your coffee...\n\n");

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &customerCoffeeType);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &customerCream);
    printf("Typical number of daily servings: ");
    scanf("%d", &dailyServing);

    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", (((customerCoffeeType == 'l' || customerCoffeeType == 'L') && (CoffeeType1 == 'l' || CoffeeType1 == 'L')) || ((customerCoffeeType == 'm' || customerCoffeeType == 'M') && (CoffeeType1 == 'm' || CoffeeType1 == 'M')) || ((customerCoffeeType == 'r' || customerCoffeeType == 'R') && (CoffeeType1 == 'r' || CoffeeType1 == 'R'))), (((dailyServing >= 1 && dailyServing <= 4) && (packageWeight1 == 250)) || ((dailyServing >= 5 && dailyServing <= 9) && (packageWeight1 == 500)) || ((dailyServing >= 10) && (packageWeight1 == 1000))), ((customerCream == 'y' || customerCream == 'Y') == (CreamWithCoffee1 == 'y' || CreamWithCoffee1 == 'Y')));
    printf(" 2|       %d         |      %d      |   %d   |\n", (((customerCoffeeType == 'l' || customerCoffeeType == 'L') && (CoffeeType2 == 'l' || CoffeeType2 == 'L')) || ((customerCoffeeType == 'm' || customerCoffeeType == 'M') && (CoffeeType2 == 'm' || CoffeeType2 == 'M')) || ((customerCoffeeType == 'r' || customerCoffeeType == 'R') && (CoffeeType2 == 'r' || CoffeeType2 == 'R'))), (((dailyServing >= 1 && dailyServing <= 4) && (packageWeight2 == 250)) || ((dailyServing >= 5 && dailyServing <= 9) && (packageWeight2 == 500)) || ((dailyServing >= 10) && (packageWeight2 == 1000))), ((customerCream == 'y' || customerCream == 'Y') == (CreamWithCoffee2 == 'y' || CreamWithCoffee2 == 'Y')));
    printf(" 3|       %d         |      %d      |   %d   |\n\n", (((customerCoffeeType == 'l' || customerCoffeeType == 'L') && (CoffeeType3 == 'l' || CoffeeType3 == 'L')) || ((customerCoffeeType == 'm' || customerCoffeeType == 'M') && (CoffeeType3 == 'm' || CoffeeType3 == 'M')) || ((customerCoffeeType == 'r' || customerCoffeeType == 'R') && (CoffeeType3 == 'r' || CoffeeType3 == 'R'))), (((dailyServing >= 1 && dailyServing <= 4) && (packageWeight3 == 250)) || ((dailyServing >= 5 && dailyServing <= 9) && (packageWeight3 == 500)) || ((dailyServing >= 10) && (packageWeight3 == 1000))), ((customerCream == 'y' || customerCream == 'Y') == (CreamWithCoffee3 == 'y' || CreamWithCoffee3 == 'Y')));

    printf("Enter how you like your coffee...\n\n");

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &customerCoffeeType);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &customerCream);
    printf("Typical number of daily servings: ");
    scanf("%d", &dailyServing);

    printf("\nThe below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", (((customerCoffeeType == 'l' || customerCoffeeType == 'L') && (CoffeeType1 == 'l' || CoffeeType1 == 'L')) || ((customerCoffeeType == 'm' || customerCoffeeType == 'M') && (CoffeeType1 == 'm' || CoffeeType1 == 'M')) || ((customerCoffeeType == 'r' || customerCoffeeType == 'R') && (CoffeeType1 == 'r' || CoffeeType1 == 'R'))), (((dailyServing >= 1 && dailyServing <= 4) && (packageWeight1 == 250)) || ((dailyServing >= 5 && dailyServing <= 9) && (packageWeight1 == 500)) || ((dailyServing >= 10) && (packageWeight1 == 1000))), ((customerCream == 'y' || customerCream == 'Y') == (CreamWithCoffee1 == 'y' || CreamWithCoffee1 == 'Y')));
    printf(" 2|       %d         |      %d      |   %d   |\n", (((customerCoffeeType == 'l' || customerCoffeeType == 'L') && (CoffeeType2 == 'l' || CoffeeType2 == 'L')) || ((customerCoffeeType == 'm' || customerCoffeeType == 'M') && (CoffeeType2 == 'm' || CoffeeType2 == 'M')) || ((customerCoffeeType == 'r' || customerCoffeeType == 'R') && (CoffeeType2 == 'r' || CoffeeType2 == 'R'))), (((dailyServing >= 1 && dailyServing <= 4) && (packageWeight2 == 250)) || ((dailyServing >= 5 && dailyServing <= 9) && (packageWeight2 == 500)) || ((dailyServing >= 10) && (packageWeight2 == 1000))), ((customerCream == 'y' || customerCream == 'Y') == (CreamWithCoffee2 == 'y' || CreamWithCoffee2 == 'Y')));
    printf(" 3|       %d         |      %d      |   %d   |\n\n", (((customerCoffeeType == 'l' || customerCoffeeType == 'L') && (CoffeeType3 == 'l' || CoffeeType3 == 'L')) || ((customerCoffeeType == 'm' || customerCoffeeType == 'M') && (CoffeeType3 == 'm' || CoffeeType3 == 'M')) || ((customerCoffeeType == 'r' || customerCoffeeType == 'R') && (CoffeeType3 == 'r' || CoffeeType3 == 'R'))), (((dailyServing >= 1 && dailyServing <= 4) && (packageWeight3 == 250)) || ((dailyServing >= 5 && dailyServing <= 9) && (packageWeight3 == 500)) || ((dailyServing >= 10) && (packageWeight3 == 1000))), ((customerCream == 'y' || customerCream == 'Y') == (CreamWithCoffee3 == 'y' || CreamWithCoffee3 == 'Y')));
     
    
    printf("Hope you found a product that suits your likes!\n");
    

    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/

//(customerCoffeeType == 'm' || customerCoffeeType == 'M'), ((customerCoffeeType == 'm' || customerCoffeeType == 'M') && (dailyServing >= 10) && packageWeight == 250), (customerCream == 'y' || customerCream == 'y') == (CreamWithCoffee3 == 'Y' || CreamWithCoffee3 == 'y')

