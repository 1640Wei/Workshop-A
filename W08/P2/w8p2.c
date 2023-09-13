/*
*****************************************************************************
                          Workshop - #8 (P2)
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
#include"w8p2.h"


// ----------------------------------------------------------------------------
// PART-1

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

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* weightLbs, double* weightKg) 
{
	double kgResult = 0.0;
	kgResult = *weightLbs / KG;
	if (weightKg != NULL) 
	{
		*weightKg = kgResult;
	}
	return kgResult;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* weightLbs, int* weightKg) 
{
	int gRresult = 0;
	gRresult = (*weightLbs / KG) * 1000.00;// or 1000
	if (weightKg != NULL) 
	{
		*weightKg = gRresult;
	}
	return gRresult;
}

// 10. convert lbs: kg and g
void convertLbs(double* pounds, double* kgs, int* grams) 
{
	convertLbsKg(pounds, kgs); //function 8
	convertLbsG(pounds, grams); //function 9
}

// 11. calculate: servings based on gPerServ
double calculateServings(const double grams, const double totalgrams, double* number) 
{
	double serving;
	serving = totalgrams / grams;
	if (number != NULL)
	{
		*number = serving;
	}
	return serving;
}

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* serving, double* number) 
{
	double costSer;
	costSer = *price / *serving;
	if (number != NULL)
	{
		*number = costSer;
	}
	return costSer;
}

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* calories, double* number) 
{
	double costCalo; 
	costCalo = *price / *calories;
	if (number != NULL)
	{
		*number = costCalo;
	} 
	return costCalo;
}

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo info) 
{
	struct ReportData reportAna = { 0 };
	reportAna.sku = info.sku;
	reportAna.price = info.price;
	reportAna.weight = info.weight;
	reportAna.calories = info.calories;
	reportAna.kgResult = convertLbsKg(&info.weight, &reportAna.kgResult); //function 8
	reportAna.gRresult = convertLbsG(&info.weight, &reportAna.gRresult); //function 9
	reportAna.serving = calculateServings(GRAMS, reportAna.gRresult, &reportAna.serving); //function 11
	reportAna.costSer = calculateCostPerServing(&info.price, &reportAna.serving, &reportAna.costSer); //function 12
	double total_calories = reportAna.serving * reportAna.calories;
	reportAna.costCalo = calculateCostPerCal(&info.price, &total_calories, &reportAna.costCalo); //function 13
	return reportAna;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("\nAnalysis Report (Note: Serving = %dg)\n", GRAMS);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData report, const int cheapest) 
{
	if (cheapest != 1) 
	{
	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf\n", 
		report.sku, 
		report.price, 
		report.weight, 
		report.kgResult,
		report.gRresult, 
		report.calories, 
		report.serving, 
		report.costSer, 
		report.costCalo);
	} else {
		printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", 
		report.sku, 
		report.price, 
		report.weight, 
		report.kgResult,
		report.gRresult, 
		report.calories, 
		report.serving, 
		report.costSer, 
		report.costCalo);
		printf(" ***\n");
	}
}

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo analysis) 
{
	printf("\n");
	printf("Final Analysis\n");
	printf("--------------\n");
	printf("Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%07d Price: $%.2lf\n\n", analysis.sku, analysis.price);
	printf("Happy shopping!\n");
}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void) 
{	
	struct CatFoodInfo info[MAX_PRODUCTS] = { {0} };
	struct ReportData report[MAX_PRODUCTS] = { {0} };
	int i; 
	int cheapestIndex = 1;

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
	double cheapestPrice = report[0].costSer;
	for (i = 0; i < MAX_PRODUCTS; i++) 
	{
		report[i] = calculateReportData (info[i]);
		
		if (report[i].costSer < cheapestPrice)
		{
			cheapestPrice = report[i].costSer;
			cheapestIndex = i;
		}
	}
	displayReportHeader(); //function 15
	for (i = 0; i < MAX_PRODUCTS; i++) 
	{
		displayReportData(report[i],i == cheapestIndex); //function 16
	}
	displayFinalAnalysis (info[cheapestIndex]); //function 17
}
