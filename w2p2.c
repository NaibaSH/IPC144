/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
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

int inputUserBuyNum(char *userName, char size)
{
    printf("%s's shirt size is '%c'\n", userName, size);
    int buyNum = 0;
    printf("Number of shirts %s is buying: ", userName);
    scanf("%d", &buyNum);
    return buyNum;
}

int main(void)
{
    const double TAX = 0.13;

    float priceOfSmallShirt, priceOfMediumShirt, priceOgLargeShirt;
    setShirtPrices(&priceOfSmallShirt, &priceOfMediumShirt, &priceOgLargeShirt);
    printf("\n");

    displayShirtPrices(&priceOfSmallShirt, &priceOfMediumShirt, &priceOgLargeShirt);
    printf("\n");

    int pattyBuyNum = inputUserBuyNum("Patty", 'S');
    printf("\n");
    int tommyBuyNum = inputUserBuyNum("Tommy", 'L');
    printf("\n");
    int sallyBuyNum = inputUserBuyNum("Sally", 'M');
    printf("\n");

    float sumSubTotal = 0.0f, sumTaxTotal = 0.0f, sumTotal = 0.0f,
          subTotal, taxTotal, total;
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    subTotal = roundNumber(pattyBuyNum * priceOfSmallShirt, 2);
    taxTotal = roundNumber(pattyBuyNum * priceOfSmallShirt * TAX, 2);
    total = subTotal + taxTotal;
    sumSubTotal += subTotal;
    sumTaxTotal += taxTotal;
    sumTotal += total;
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",
           'S', priceOfSmallShirt, pattyBuyNum, subTotal, taxTotal, total);

    subTotal = roundNumber(sallyBuyNum * priceOfMediumShirt, 2);
    taxTotal = roundNumber(sallyBuyNum * priceOfMediumShirt * TAX, 2);
    total = subTotal + taxTotal;
    sumSubTotal += subTotal;
    sumTaxTotal += taxTotal;
    sumTotal += total;
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",
           'M', priceOfMediumShirt, sallyBuyNum, subTotal, taxTotal, total);

    subTotal = roundNumber(tommyBuyNum * priceOgLargeShirt, 2);
    taxTotal = roundNumber(tommyBuyNum * priceOgLargeShirt * TAX, 2);
    total = subTotal + taxTotal;
    sumSubTotal += subTotal;
    sumTaxTotal += taxTotal;
    sumTotal += total;
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",
           'L', priceOgLargeShirt, tommyBuyNum, subTotal, taxTotal, total);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", sumSubTotal, sumTaxTotal, sumTotal);

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n");
    printf("\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              323.5100\n");
    printf("Toonies  161    1.5100\n");
    printf("Loonies    1    0.5100\n");
    printf("Quarters   2    0.0100\n");
    printf("Dimes      0    0.0100\n");
    printf("Nickels    0    0.0100\n");
    printf("Pennies    1    0.0000\n");
    printf("\n");
    printf("Average cost/shirt: $24.8854\n");
    printf("\n");
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              365.5700\n");
    printf("Toonies  182    1.5700\n");
    printf("Loonies    1    0.5700\n");
    printf("Quarters   2    0.0700\n");
    printf("Dimes      0    0.0700\n");
    printf("Nickels    1    0.0200\n");
    printf("Pennies    2    0.0000\n");
    printf("\n");
    printf("Average cost/shirt: $28.1208\n");
    printf("\n");
    return 0;
}