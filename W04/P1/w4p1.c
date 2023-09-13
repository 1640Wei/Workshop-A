/*
*****************************************************************************
                          Workshop - #4 (P1)
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

int main(void){

    int number, counter;
    char capitals;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");
    printf("\n");
    printf("D = do/while | W = while | F = for | Q = quit\n");
    printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
    scanf(" %c%d", &capitals, &number);

    while(capitals != 'Q' || number != 0){
        if(capitals == 'Q' && number != 0){
            printf("ERROR: To quit, the number of iterations should be 0!\n");
        }
        else if (capitals != 'D' && capitals != 'W' && capitals != 'F'){
            printf("ERROR: Invalid entered value(s)!\n");
        }
        else if (capitals == 'D' && number > 2 && number < 21){
                printf("DO-WHILE: ");
            do {
                printf("%c", capitals);
                number--;
            } while (number > 0);
                printf("\n");
        }
        else if (capitals == 'W' && number > 2 && number < 21){  
                printf("WHILE   : ");             
            while (number != 0){
                printf("%c", capitals);
                number--;
            }
                printf("\n");
        }
        else if (capitals == 'F' && number > 2 && number < 21){
            {
            printf("FOR     : "); 
            for (counter = 0; counter < number; number--)
            printf("%c", capitals);
        }  
            printf("\n");}
        else {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");           
    }
    
    printf("\n");
    printf("D = do/while | W = while | F = for | Q = quit\n");
    printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
    scanf(" %c%d", &capitals, &number);
    }
    printf("\n");
    printf("+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");
    return 0;
}