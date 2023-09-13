/*
*****************************************************************************
                          Workshop - #3 (P2)
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
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double smallPrice, mediumPrice, largePrice;
 
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf(" %lf", &smallPrice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf(" %lf", &mediumPrice);
    printf("Enter the price for a LARGE shirt: $");
    scanf(" %lf", &largePrice);
    printf("\n");
    printf("Shirt Store Price List\n");
    printf("======================\n");
 
    printf("SMALL  : $%.2lf\n", smallPrice);
    printf("MEDIUM : $%.2lf\n", mediumPrice);
    printf("LARGE  : $%.2lf\n", largePrice);
    printf("\n"); 
 
    int buyS, buyM, buyL; 
  
    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &buyS);
    printf("\n");
    printf("Tommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &buyL);
    printf("\n");
    printf("Sally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &buyM);
    printf("\n");

    int subtotalS = smallPrice * 100 * buyS;
    int subtotalS1 = (int)((smallPrice * 1000) * buyS) % 10;
    int round1 = subtotalS1 >= 5;
    subtotalS += round1;

    int taxS = subtotalS * TAX;
    int taxeS1 = (int)(subtotalS * TAX * 10) %10;
    int taxeround1 = taxeS1 >= 5;
    taxS += taxeround1;

    int subtotalM = mediumPrice * 100 * buyM;
    int subtotalM1 = (int)(mediumPrice * 1000 * buyM) % 10;
    int round2 = subtotalM1 >= 5;
    subtotalM += round2;
   
    int taxM = subtotalM * TAX;
    int taxeM1 = (int)(subtotalM * TAX * 10) %10;
    int taxeround2 = taxeM1 >= 5;
    taxM += taxeround2;
  
    int subtotalL = largePrice * 100 * buyL;
    int subtotalL1 = (int)(largePrice * 1000 * buyL) % 10;
    int round3 = subtotalL1 >= 5;
    subtotalL += round3;

    int taxL = subtotalL * TAX;
    int taxeL1 = (int)(subtotalL * TAX * 10) %10;
    int taxeround3 = taxeL1 >= 5;
    taxL += taxeround3;

    double subTotalSML = (subtotalS + subtotalM + subtotalL) / 100.00;
    double taxSML = (taxS + taxM + taxL) / 100.00;
    double totalSML= (subTotalSML + taxSML);

    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, smallPrice, buyS, (double)subtotalS / 100,(double)taxS / 100, (double) (subtotalS + taxS) / 100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, mediumPrice, buyM, (double)subtotalM / 100, (double)taxM / 100, (double) (subtotalM + taxM) / 100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, largePrice, buyL, (double)subtotalL / 100, (double)taxL / 100, (double) (subtotalL + taxL) / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", subTotalSML, taxSML, totalSML ); 

    int tooniesQty = (int)(subTotalSML * 100) / 200;
    int tooniesbal = (int)(subTotalSML * 100) % 200;
    double newtooniesbal = (double)tooniesbal / 100;
   
    int looniesQty = (int)(newtooniesbal * 100) / 100;
    int looniesbal = (int)(newtooniesbal * 100) % 100;
    double newlooniesbal = (double)looniesbal / 100;
   
    int quartersQty = (int)(newlooniesbal * 100) / 25;
    int quartersbal = (int)(newlooniesbal * 100) % 25;
    double newquartersbal = (double)quartersbal / 100;  

    int dimesQty = (int)(newquartersbal * 100) / 10;
    int dimesbal = (int)(newquartersbal * 100) % 10;
    double newdimessbal = (double)dimesbal / 100;

    int nickelsQty = (int)(newdimessbal * 100) / 5;
    int nickelsbal = (int)(newdimessbal * 100) % 5;
    double newnickelssbal = (double)nickelsbal / 100;

    int penniesQty = (int)(newnickelssbal * 100) / 1;
    int penniesbal = (int)(newnickelssbal * 100) % 1;
    double newpenniessbal = (double)penniesbal / 100;
   
    int buySML = buyS + buyM + buyL;
    int averageSub = subTotalSML / buySML * 100000; 
    int averageDecimal = averageSub % 10;
    int averageRound = averageDecimal >= 5;
    int newAverage1 = (subTotalSML / buySML * 10000) + averageRound;

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n");
    printf("\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", subTotalSML);
    printf("Toonies  %3d %9.4lf\n", tooniesQty, newtooniesbal);
    printf("Loonies  %3d %9.4lf\n", looniesQty, newlooniesbal);
    printf("Quarters %3d %9.4lf\n", quartersQty, newquartersbal);
    printf("Dimes    %3d %9.4lf\n", dimesQty, newdimessbal);
    printf("Nickels  %3d %9.4lf\n", nickelsQty, newnickelssbal);
    printf("Pennies  %3d %9.4lf\n", penniesQty, newpenniessbal);
    printf("\n");
    printf("Average cost/shirt: $%.4lf\n",(double) newAverage1 / 10000);
    printf("\n");

    int tooniesQtytotal = (int)(totalSML * 100) / 200;
    int tooniesbaltotal = (int)(totalSML * 100) % 200;
    double newtooniesbaltotal = (double)tooniesbaltotal / 100;
   
    int looniesQtytotal = (int)(newtooniesbaltotal * 100) / 100;
    int looniesbaltotal = (int)(newtooniesbaltotal * 100) % 100;
    double newlooniesbaltotal = (double)looniesbaltotal / 100;
   
    int quartersQtytotal = (int)(newlooniesbaltotal * 100) / 25;
    int quarltotal = (int)(newtooniesbaltotal * 100) % 25; 
    double newquartersbaltotal = (double)quarltotal / 100;

    int dimesQtytotal = (int)(newquartersbaltotal * 100) / 10;
    int dimesbaltotal = (int)(newquartersbaltotal * 100) % 10;
    double newdimessbaltotal = (double)dimesbaltotal / 100;

    int nickelsQtytotal = (int)(newdimessbaltotal * 100) / 5;
    int nickelsbaltotal = (int)(newdimessbaltotal * 100) % 5;
    double newnickelssbaltotal = (double)nickelsbaltotal / 100;

    int penniesQtytotal = (int)(newnickelssbaltotal * 100) / 1;
    int penniesbaltotal = (int)(newnickelssbaltotal * 100) % 1;
    double newpenniessbaltotal = (double)penniesbaltotal / 100;

    int averageTot = totalSML / buySML * 100000; 
    int averageDecimalTot = averageTot % 10;
    int averageRoundTot = averageDecimalTot >= 5;
    int newAverageTot  = (totalSML / buySML * 10000) + averageRoundTot;

    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", totalSML);
    printf("Toonies  %3d %9.4lf\n", tooniesQtytotal, newtooniesbaltotal);
    printf("Loonies  %3d %9.4lf\n", looniesQtytotal, newlooniesbaltotal);
    printf("Quarters %3d %9.4lf\n", quartersQtytotal,newquartersbaltotal);
    printf("Dimes    %3d %9.4lf\n", dimesQtytotal, newdimessbaltotal);
    printf("Nickels  %3d %9.4lf\n",nickelsQtytotal, newnickelssbaltotal);
    printf("Pennies  %3d %9.4lf\n", penniesQtytotal, newpenniessbaltotal);
    printf("\n");
    printf("Average cost/shirt: $%.4lf\n",(double) newAverageTot / 10000);

    return 0;
}