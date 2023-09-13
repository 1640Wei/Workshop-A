/*
*****************************************************************************
                          Workshop - #2 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

char type;
char size;
int bagWeight;
int bagWeight1 = 250;
int bagWeight2 = 500;
int bagWeight3 = 1000;
char cream;
float temperature;
float temperature1 = 65.7;
float temperature2 = 70.0;
float temperature3 = 80.5;
char strength;
int number;
char maker;

printf("Take a Break - Coffee Shop\n");
printf("==========================\n");
printf("\n");
printf("Enter the coffee product information being sold today...\n");
printf("\n");

printf("COFFEE-1...\n");
printf("Type ([L]ight,[B]lend): ");
scanf(" %c", &type);
printf("Grind size ([C]ourse,[F]ine): ");
scanf(" %c", &size);
printf("Bag weight (g): ");
scanf(" %d", &bagWeight);
printf("Best served with cream ([Y]es,[N]o): ");
scanf(" %c", &cream);
printf("Ideal serving temperature (Celsius): ");
scanf(" %f", &temperature);
printf("\n");

printf("COFFEE-2...\n");
printf("Type ([L]ight,[B]lend): ");
scanf(" %c", &type);
printf("Grind size ([C]ourse,[F]ine): ");
scanf(" %c", &size);
printf("Bag weight (g): ");
scanf(" %d", &bagWeight);
printf("Best served with cream ([Y]es,[N]o): ");
scanf(" %c", &cream);
printf("Ideal serving temperature (Celsius): ");
scanf(" %f", &temperature);
printf("\n");

printf("COFFEE-3...\n");
printf("Type ([L]ight,[B]lend): ");
scanf(" %c", &type);
printf("Grind size ([C]ourse,[F]ine): ");
scanf(" %c", &size);
printf("Bag weight (g): ");
scanf(" %d", &bagWeight);
printf("Best served with cream ([Y]es,[N]o): ");
scanf(" %c", &cream);
printf("Ideal serving temperature (Celsius): ");
scanf(" %f", &temperature);
printf("\n");

printf("---+---------------+---------------+---------------+-------+--------------\n");
printf("   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving\n");
printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
printf("   +---------------+---------------+---------------+ With  +--------------\n");
printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
printf("---+---------------+---------------+---------------+-------+--------------\n");
printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (type == 'l' || type == 'L'), (type == 'b' || type == 'B'), (size == 'f' || size == 'F'), (size == 'C' || size == 'c'), bagWeight1 , bagWeight1 / GRAMS_IN_LBS, (cream == 'n' || cream == 'N'), temperature1, (temperature1 * 1.8) + 32.0);
printf(" 2 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (type == 'b' || type == 'B'), (type == 'l' || type == 'L'), (size == 'C' || size == 'c'), (size == 'f' || size == 'F'), bagWeight2 , bagWeight2 / GRAMS_IN_LBS, (cream == 'y' || cream == 'Y'), temperature2, (temperature2 * 1.8) + 32.0);
printf(" 3 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", (type == 'l' || type == 'L'), (type == 'b' || type == 'B'), (size == 'C' || size == 'c'), (size == 'f' || size == 'F'), bagWeight3 , bagWeight3 / GRAMS_IN_LBS, (cream == 'y' || cream == 'Y'), temperature3, (temperature3 * 1.8) + 32.0);
printf("\n");

printf("Enter how you like your coffee and the coffee maker equipment you use...\n");
printf("\n");

printf("Coffee strength ([M]ild,[R]ich): ");
scanf(" %c", &strength);
printf("Do you like your coffee with cream ([Y]es,[N]o): ");
scanf(" %c", &cream);
printf("Typical number of daily servings: ");
scanf(" %d", &number);
printf("Maker ([R]esidential,[C]ommercial): ");
scanf(" %c", &maker);
printf("\n");
printf("The below table shows how your preferences align to the available products:\n");
printf("\n");

printf("--------------------+--------------------+-------------+-------+--------------\n");
printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
printf("--+-----------------+--------------------+-------------+-------+--------------\n");
printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",(type == 'l' || 'L'), (size == 'c' || size == 'C'), bagWeight1 >= 500, (cream == 'y' || cream == 'Y'), temperature1 >= 70.0);
printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n",(type == 'b' || type == 'B'), (size == 'f' || size == 'F'), bagWeight2 >= 500, (cream == 'n' || cream == 'N'), temperature2 >= 70.0);
printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n",(type == 'l' || type == 'L'), (size == 'f' || size == 'F'), bagWeight3 <= 500, (cream == 'n' || cream == 'N'), temperature3 >= 70.0);
printf("\n");

printf("Enter how you like your coffee and the coffee maker equipment you use...\n");
printf("\n");
printf("Coffee strength ([M]ild,[R]ich): ");
scanf(" %c", &strength);
printf("Do you like your coffee with cream ([Y]es,[N]o): ");
scanf(" %c", &cream);
printf("Typical number of daily servings: ");
scanf(" %d", &number);
printf("Maker ([R]esidential,[C]ommercial): ");
scanf(" %c", &maker);
printf("\n");

printf("The below table shows how your preferences align to the available products:\n");
printf("\n");

printf("--------------------+--------------------+-------------+-------+--------------\n");
printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
printf("--+-----------------+--------------------+-------------+-------+--------------\n");
printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",(type == 'b' || type == 'B'), (size == 'f' || size == 'F'), bagWeight1 >= 1000, (cream == 'y' || cream == 'Y'), temperature1 <= 69.9);
printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n",(type == 'l' || type == 'L'), (size == 'c' || size == 'C'), bagWeight2 >= 1000, (cream == 'n' || cream == 'N'), temperature2 <= 69.9);
printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n",(type == 'b' || type == 'B'), (size == 'c' || size == 'C'), bagWeight3 <= 1000, (cream == 'n' || cream == 'N'), temperature3 <= 69.9);
printf("\n");
printf("Hope you found a product that suits your likes!\n");
printf("\n");


    return 0;
}
