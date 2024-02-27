/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
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

float roundNumber(float v, int precision)
{
    float multipleBase = 1.0f;
    int i = 0;
    while (i < precision)
    {
        multipleBase *= 10.0f;
        i++;
    }

    float tmp = v * multipleBase;

    if (v < 0)
    {
        tmp -= 0.5;
    }
    else
    {
        tmp += 0.5;
    }

    int intTmp = (int)tmp;
    v = (float)intTmp / multipleBase;

    return v;
}

void setShirtPrices(float *s, float *m, float *l)
{
    printf("Set Shirt Prices\n");
    printf("================\n");

    printf("Enter the price for a SMALL shirt: $");
    scanf("%f", s);

    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f", m);

    printf("Enter the price for a LARGE shirt: $");
    scanf("%f", l);
}

void displayShirtPrices(float *s, float *m, float *l)
{
    printf("Shirt Store Price List\n");
    printf("======================\n");

    printf("SMALL  : $%.2lf\n", *s);
    printf("MEDIUM : $%.2lf\n", *m);
    printf("LARGE  : $%.2lf\n", *l);
}

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';

    float priceOfSmallShirt, priceOfMediumShirt, priceOgLargeShirt;
    setShirtPrices(&priceOfSmallShirt, &priceOfMediumShirt, &priceOgLargeShirt);
    printf("\n");

    displayShirtPrices(&priceOfSmallShirt, &priceOfMediumShirt, &priceOgLargeShirt);
    printf("\n");

    printf("Patty's shirt size is '%c'\n", patSize);
    int buyingNum = 0;
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &buyingNum);
    printf("\n");

    float subTotal, taxTotal, total;
    subTotal = roundNumber(buyingNum * priceOfSmallShirt, 2);
    taxTotal = roundNumber(buyingNum * priceOfSmallShirt * TAX, 2);
    total = subTotal + taxTotal;
    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n", buyingNum);
    printf("Sub-total: $%8.4lf\n", subTotal);
    printf("Taxes    : $%8.4lf\n", taxTotal);
    printf("Total    : $%8.4lf\n", total);
    return 0;
}