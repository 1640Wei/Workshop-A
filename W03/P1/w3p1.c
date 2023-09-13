/*
*****************************************************************************
                          Workshop - #3 (P1)
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

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';
    float smallShirtPrice;
    float mediumShirtPrice;
    float largeShirtPrice;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf(" %f", &smallShirtPrice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf(" %f", &mediumShirtPrice);
    printf("Enter the price for a LARGE shirt: $");
    scanf(" %f", &largeShirtPrice);
    printf("\n");
    printf("Shirt Store Price List\n");
    printf("======================\n");

    printf("SMALL  : $%.2f\n", smallShirtPrice);
    printf("MEDIUM : $%.2f\n", mediumShirtPrice);
    printf("LARGE  : $%.2f\n", largeShirtPrice);
    printf("\n");  

    int numberBuy;
    int newSmallShirtPrice = (smallShirtPrice * 8) * 10000;
    int round = newSmallShirtPrice % 10 >= 5;
    float subTotal = (newSmallShirtPrice + round) / 10000.00 ;

    int Taxes = (smallShirtPrice * TAX * 8) * 100;
    int round2 = Taxes % 10 >= 5;
    float newTaxes = (Taxes + round2) / 100.00;
    
    float total = subTotal + newTaxes;
    
    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &numberBuy);
    printf("\n");
    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n", numberBuy);
    printf("Sub-total: $%.4lf\n", subTotal);
    printf("Taxes    : $ %.4lf\n", newTaxes);
    printf("Total    : $%.4lf\n", total);


    return 0;
}