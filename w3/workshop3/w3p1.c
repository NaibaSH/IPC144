/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  : 
Student ID#:
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;

    const int ProductID1 = 111,
        ProductID2 = 222,
        ProductID3 = 111;

    const double PriceProduct1 = 111.49,
        PriceProduct2 = 222.99,
        PriceProduct3 = 334.49;

    const char TaxProduct1 = 'Y',
         TaxProduct2 = 'N',
         TaxProduct3 = 'N';

    double AveragePrice;

    AveragePrice = (PriceProduct1 + PriceProduct2 + PriceProduct3) / 3;

    printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n  Taxed: %c\n  Price: $%.4lf\n\n", ProductID1, TaxProduct1, PriceProduct1);

    printf("Product-2 (ID:%d)\n  Taxed: %c\n  Price: $%.4lf\n\n", ProductID2, TaxProduct2, PriceProduct2);

    printf("Product-3 (ID:%d)\n  Taxed: %c\n  Price: $%.4lf\n\n", ProductID3, TaxProduct3, PriceProduct3);

    printf("The average of all prices is: $%.4lf\n\n", AveragePrice);

    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");

    printf("1. These expressions evaluate to TRUE or FALSE\n2. FALSE: is always represented by integer value 0\n3. TRUE : is represented by any integer value other than 0\n\nSome Data Analysis...\n=====================\n");

    printf("1. Is product 1 taxable? -> %d\n\n", TaxProduct1 == 'Y');

    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", (TaxProduct2 == 'N') && (TaxProduct3 == 'N'));

    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n", testValue, (PriceProduct3) < testValue);

    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", (PriceProduct3 > (PriceProduct1 + PriceProduct2)));

    printf("5. Is the price of product 1 equal to or more than the price difference\n   of product 3 LESS product 2? ->  %d (price difference: $%.2lf)\n\n", PriceProduct1 >= (PriceProduct3 - PriceProduct2), PriceProduct3 - PriceProduct2);

    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", PriceProduct2 >= AveragePrice);

    printf("7. Based on product ID, product 1 is unique -> %d\n\n", (ProductID1 != ProductID2) && (ProductID1 != ProductID3));

    printf("8. Based on product ID, product 2 is unique -> %d\n\n", (ProductID2 != PriceProduct1) && (PriceProduct2 != PriceProduct3));

    printf("9. Based on product ID, product 3 is unique -> %d\n", (ProductID3 != ProductID1) && (ProductID3 != ProductID2));


    return 0;
}
