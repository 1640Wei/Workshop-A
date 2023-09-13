/*
*****************************************************************************
                          Workshop - #8 (P1)
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


// System Libraries
#include<stdio.h>

// User Libraries
#include"w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* integer_Input)
{
	int intNumber;
	do
	{
		scanf("%d", &intNumber);
		if(intNumber <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			break;
		}
	}while(intNumber <= 0);
	if (integer_Input != NULL)
	{
		*integer_Input = intNumber;
	}
	return intNumber;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* double_Input)
{
	double doubleNumber;
	do
	{
		scanf("%lf", &doubleNumber);
		if(doubleNumber <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			break;
		}
	}while(doubleNumber <= 0);
	if (double_Input != NULL)
	{
		*double_Input= doubleNumber;
	}
	return doubleNumber;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int product_quantity)
{
	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", product_quantity);
    printf("NOTE: A 'serving' is %dg\n\n", GRAMS);  
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int productNum) 
{
	struct CatFoodInfo data = { 0 };
	printf("Cat Food Product #%d\n",productNum);
	printf("--------------------\n");
	printf("SKU           : "); 
	getIntPositive(&data.sku);
	printf("PRICE         : $"); 
	getDoublePositive(&data.price);
	printf("WEIGHT (LBS)  : "); 
	getDoublePositive(&data.weight);
	printf("CALORIES/SERV.: "); 
	getIntPositive(&data.calories);
	printf("\n");
	return data;
}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku, const double* price, const double* weight, int calories)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku, *price, *weight, calories);
}

// 7. Logic entry point
void start(void) 
{
	int i;
	struct CatFoodInfo info[MAX_PRODUCTS] = { {0} };

	openingMessage(MAX_PRODUCTS);  //function 3
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		info[i] = getCatFoodInfo(i + 1); //function 4
	}
	displayCatFoodHeader(); //function 5
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		displayCatFoodData(info[i].sku, &info[i].price, &info[i].weight, info[i].calories); //function 6
	}
	printf("\n");
}

