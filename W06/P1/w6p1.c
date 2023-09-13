/*
*****************************************************************************
                          Workshop - #6 (P1)
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

#define MAX_INCOME 400000.00
#define MIN_INCOME 500.00
#define MIN_ITEMCOST 100.00
#define MAX_NUMBER 10
#define MAX_PRIORITY 3
#define MIN_PRIORITY 1

int main(void) {
    double income;
    double total = 0;
    int forecastItem = 0;
    int i, item;
    double itemCost[MAX_NUMBER] = { 0.0 };
    int priority[MAX_NUMBER] = { 0 };
    char finance[MAX_NUMBER] = { 0 };
    
    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");
    printf("\n");
    printf("Enter your monthly NET income: $");
    scanf("%lf", &income);

    while (income < MIN_INCOME || income > MAX_INCOME) {
        if (income < MIN_INCOME) {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n");
            printf("\n");
        }
        if (income > MAX_INCOME) {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
            printf("\n");
        }
        printf("Enter your monthly NET income: $");
        scanf("%lf", &income);
    }
    printf("\n");
    do {
        printf("How many wish list items do you want to forecast?: ");
        scanf(" %d", &forecastItem);
        if (forecastItem < MIN_PRIORITY || forecastItem > MAX_NUMBER) {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
            printf("\n");
        } 
    } while (forecastItem < MIN_PRIORITY || forecastItem > MAX_NUMBER);

    for (item = 0; item < forecastItem; item++) {
        printf("\n");
        printf("Item-%d Details:\n", item + 1);
        printf("   Item cost: $");
        scanf("%lf", &itemCost[item]);
        while (itemCost[item] < MIN_ITEMCOST) {
            printf("      ERROR: Cost must be at least $100.00\n");
            printf("   Item cost: $");
            scanf("%lf", &itemCost[item]);
        }
        printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
        scanf("%d", &priority[item]);
        while (priority[item] > MAX_PRIORITY || priority[item] < MIN_PRIORITY) {
            printf("      ERROR: Value must be between 1 and 3\n");
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[item]);
        }
        printf("   Does this item have financing options? [y/n]: ");
        scanf("%s", &finance[item]);
        while (finance[item] != 'y' && finance[item] != 'n') {
            printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            printf("   Does this item have financing options? [y/n]: ");
            scanf("%s", &finance[item]);
        }
        total += itemCost[item];
    }
    
    printf("\n");
    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for (i = 0; i < forecastItem; i++) {
        printf("%3d  %5d    %5c    %11.2lf\n", i + 1, priority[i], finance[i], itemCost[i]);
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n", total);
    printf("Best of luck in all your future endeavours!\n");
    return 0;
}