/*
*****************************************************************************
                          Workshop - #4 (P2)
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
int apples = 0, oranges = 0, pears = 0, tomatoes = 0, cabbages = 0, anothershop = 1;
int apPick, orPick, pePick, toPick, caPick;

while (anothershop != 0) {
   printf("Grocery Shopping\n");
   printf("================\n");
   printf("How many APPLES do you need? : ");
   scanf("%d", &apples);
 
    while (apples < 0) {
        {
        printf("ERROR: Value must be 0 or more.");
        }
        printf("\n");
        printf("How many APPLES do you need? : ");
        scanf("%d", &apples);
    }
        printf("\n");
        printf("How many ORANGES do you need? : ");
        scanf("%d", &oranges);

    while (oranges < 0) {
        {
        printf("ERROR: Value must be 0 or more.");
        }
        printf("\n");
        printf("How many ORANGES do you need? : ");
        scanf("%d", &oranges);
    }
        printf("\n");
        printf("How many PEARS do you need? : ");
        scanf("%d", &pears);   

    while (pears < 0) {
        {
        printf("ERROR: Value must be 0 or more.");
        }
        printf("\n");
        printf("How many PEARS do you need? : ");
        scanf("%d", &pears);
    }
        printf("\n");
        printf("How many TOMATOES do you need? : ");
        scanf("%d", &tomatoes);      

    while (tomatoes < 0) {
        {
        printf("ERROR: Value must be 0 or more.");
        }
        printf("\n");
        printf("How many TOMATOES do you need? : ");
        scanf("%d", &tomatoes);
    }
        printf("\n");
        printf("How many CABBAGES do you need? : ");
        scanf("%d", &cabbages);

    while (cabbages < 0) {
        {
        printf("ERROR: Value must be 0 or more.");
        }
        printf("\n");
        printf("How many CABBAGES do you need? : ");
        scanf("%d", &cabbages);
    }
    printf("\n");
    printf("--------------------------\n");
    printf("Time to pick the products!\n");
    printf("--------------------------\n");
    printf("\n"); 
    
    while( apples != 0) {  
        printf("Pick some APPLES... how many did you pick? : ");
        scanf("%d", &apPick);
        if ( apPick <= 0) {
            printf("ERROR: You must pick at least 1!\n");
        }
        else if  (apples < apPick) {  
            printf("You picked too many... only %d more APPLE(S) are needed.\n", apples);
        }
        else if (apples >= apPick ) {  
            apples -= apPick; 
            if(apples != 0)           
                printf("Looks like we still need some APPLES...\n");
            else{
                printf("Great, that's the apples done!\n");
                printf("\n"); 
            }
        }       
    }
    
    while( oranges != 0) {  
        printf("Pick some ORANGES... how many did you pick? : ");
        scanf("%d", &orPick);
        if ( orPick <= 0) {
            printf("ERROR: You must pick at least 1!\n");
        }
        else if  (oranges < orPick) {  
            printf("You picked too many... only %d more ORANGE(S) are needed.\n", oranges);
        }
        else if (oranges >= orPick ) {  
            oranges -= orPick; 
            if(oranges != 0)           
                printf("Looks like we still need some ORANGES...\n");
            else{
                printf("Great, that's the oranges done!\n");
                printf("\n"); 
            }
        }       
    }

    while( pears != 0) {   
        printf("Pick some PEARS... how many did you pick? : ");
        scanf("%d", &pePick);
        if ( pePick <= 0) {
            printf("ERROR: You must pick at least 1!\n");
        }
        else if  (pears < pePick) {  
            printf("You picked too many... only %d more PEAR(S) are needed.\n", pears);
        }
        else if (pears >= pePick ) {  
            pears -= pePick; 
            if(pears != 0)           
                printf("Looks like we still need some PEARS...\n");
            else{
                printf("Great, that's the pears done!\n");
                printf("\n"); 
            }
        }       
    }
        
    while( tomatoes != 0) {   
        printf("Pick some TOMATOES... how many did you pick? : ");
        scanf("%d", &toPick);
        if ( toPick <= 0) {
            printf("ERROR: You must pick at least 1!\n");
        }
        else if  (tomatoes < toPick) { 
            printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoes); 
        }
        else if (tomatoes >= toPick ) {  
            tomatoes -= toPick; 
            if(tomatoes != 0)           
                printf("Looks like we still need some TOMATOES...\n");
            else{
                printf("Great, that's the tomatoes done!\n");
                printf("\n"); 
            }
        }       
    }
    
    while( cabbages != 0) {   
        printf("Pick some CABBAGES... how many did you pick? : ");
        scanf("%d", &caPick);
        if ( caPick <= 0) {
            printf("ERROR: You must pick at least 1!\n");
        }
        else if  (cabbages < caPick) {  
            printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbages);
        }
        else if (cabbages >= caPick ) {  
            cabbages -= caPick; 
            if(cabbages != 0) 
                printf("Looks like we still need some CABBAGES...\n");          
            else{
                printf("Great, that's the cabbages done!\n");
                printf("\n"); 
            }
        }       
    }
    printf("All the items are picked!\n");
    printf("\n");
    printf("Do another shopping? (0=NO): ");
    scanf("%d", &anothershop);
    printf("\n");
}
    printf("Your tasks are done for today - enjoy your free time!\n");
    return 0;
}