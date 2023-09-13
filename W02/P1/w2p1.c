/*
*****************************************************************************
                          Workshop - #2 (P1)
Full Name  : Ching Wei Lai
Student ID#: 136893211
Email      : cwlai6@myseneca.ca
Section    : NHH

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    
    printf("Product Information\n");
    printf("===================\n");

    int productIdOne = 111;
    float priceOne = 111.49;
    char taxedOne = 'Y';

    printf("Product-1 (ID:%d)\n", productIdOne);
    printf("  Taxed: %c\n", taxedOne);
    printf("  Price: $%.4lf\n", priceOne);
    printf("\n");

    int productIdTwo = 222;
    float priceTwo = 222.99;
    char taxedTwo = 'N';
    
    printf("Product-2 (ID:%d)\n", productIdTwo);
    printf("  Taxed: %c\n", taxedTwo);
    printf("  Price: $%.4lf\n", priceTwo);
    printf("\n");

    int productIdThree = 111;
    float priceThree = 334.49;
    char taxedThree = 'N';

    printf("Product-3 (ID:%d)\n", productIdThree);
    printf("  Taxed: %c\n", taxedThree);
    printf("  Price: $%.4lf\n", priceThree);
    printf("\n");

    float averagePrice = (priceOne + priceTwo + priceThree) / 3;    
    printf("The average of all prices is: $%.4lf\n", averagePrice);
    printf("\n");

    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n");
    printf("\n");
    printf("Some Data Analysis...\n");
    printf("=====================\n");
    
    printf("1. Is product 1 taxable? -> %d\n", taxedOne == 'Y');
    printf("\n");
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n",'N' == taxedTwo && taxedThree);
    printf("\n");

    const double testValue = 330.99;
    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n", testValue, priceThree <= testValue);
    printf("\n");
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n", priceThree >= priceTwo + priceOne);
    printf("\n");
    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? ->  %d", priceOne >= priceThree - priceTwo);
    printf(" (price difference: $%.2lf)\n", priceThree - priceTwo);
    printf("\n");
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n", priceTwo >= (priceOne + priceTwo + priceThree) / 3);
    printf("\n");
    printf("7. Based on product ID, product 1 is unique -> %d\n", productIdOne = !productIdTwo && !productIdThree);
    printf("\n");
    printf("8. Based on product ID, product 2 is unique -> %d\n", productIdTwo = !productIdOne || !productIdThree);
    printf("\n");
    printf("9. Based on product ID, product 3 is unique -> %d\n", productIdThree = !productIdOne && !productIdTwo);
    printf("\n");
    return 0;
}