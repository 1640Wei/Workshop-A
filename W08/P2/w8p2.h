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


// ----------------------------------------------------------------------------
// defines/macros

#define MAX_PRODUCTS 3
#define GRAMS 64
#define KG 2.20462

// ----------------------------------------------------------------------------
// structures
struct CatFoodInfo
{
	int sku;
	double price;
	int calories;
	double weight;
};

struct ReportData 
{
	double kgResult; 
	int gRresult; 
	double serving; 
	double costSer; 
	double costCalo; 
	int sku; 
	double price; 
	double weight; 
	int calories;  
};

// ----------------------------------------------------------------------------
// function prototypes

// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* integer_Input);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* double_Input);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int product_quantity);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int productNum); 

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku, const double* price, const double* weight, int calories);


// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* weightLbs, double* weightKg); 

// 9. convert lbs: g
int convertLbsG(const double* weightLbs, int* weightKg); 

// 10. convert lbs: kg / g
void convertLbs(double *pounds, double *kgs, int* grams); 

// 11. calculate: servings based on gPerServ
double calculateServings(const double grams, const double totalgrams, double* number); 

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* serving, double* number);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* calories, double* number);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo info);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData report, const int cheapest);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo analysis); 

// ----------------------------------------------------------------------------

// 7. Logic entry point 
void start(void);
