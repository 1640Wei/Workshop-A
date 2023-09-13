/*
*****************************************************************************
                          Workshop - #5 (P1)
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
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
    const int JAN = 1;
    const int DEC = 12;
    int year, month, currentDay;
    double morningInput, eveningInput, morningSum = 0.0, eveningSum = 0.0, overallSum = 0.0;

    
    printf("General Well-being Log\n");
    printf("======================\n");
    printf("Set the year and month for the well-being log (YYYY MM): ");
    scanf("%d%d", &year, &month);

    while (year < 2012 || year > 2022 || month < 1 || month > 12) { 

    if (year < 2012 || year > 2022 ){
        printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        if (month < 1 || month > 12){
            printf("   ERROR: Jan.(%d) - Dec.(%d)\n", JAN, DEC);
        }
    }
    else if (month < 1 || month > 12){
        printf("   ERROR: Jan.(%d) - Dec.(%d)\n", JAN, DEC);
    }
    printf("Set the year and month for the well-being log (YYYY MM): ");
    scanf("%d%d", &year, &month);
    }
    printf("\n");
    printf("*** Log date set! ***\n");
    
    if (month == 1) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-JAN-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 2) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-FEB-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 3) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-MAR-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 4) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-APR-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 5) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-MAY-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 6) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-JUN-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 7) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-JUL-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 8) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-AUG-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 9) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-SEP-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 10) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-OCT-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 11) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-NOV-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
    if (month == 12) {
        for(currentDay = 1; currentDay <= LOG_DAYS; currentDay++){
            printf("\n");
            printf("%d-DEC-0%d\n", year, currentDay);
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
        while (morningInput < 0.0 || morningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningInput);
            }
            morningSum += morningInput;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
        while (eveningInput < 0.0 || eveningInput > 5.0){
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningInput);
            }
            eveningSum += eveningInput;   
        }
    }
        overallSum = morningSum + eveningSum;
        printf("\n");
        printf("Summary\n");
        printf("=======\n");
        printf("Morning total rating: %.3lf\n", morningSum); 
        printf("Evening total rating:  %.3lf\n", eveningSum);
        printf("----------------------------\n");
        printf("Overall total rating: %.3lf\n", overallSum);
        printf("\n");
        printf("Average morning rating:  %.1lf\n", morningSum / 3);
        printf("Average evening rating:  %.1lf\n", eveningSum / 3);
        printf("----------------------------\n");
        printf("Average overall rating:  %.1lf\n", overallSum / 6.0);
    return 0;
}