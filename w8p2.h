
// ----------------------------------------------------------------------------
// defines/macros
#define Max_Products 3
#define GRAMS 64
#define LBS_TO_KG 2.20462

// ----------------------------------------------------------------------------
// structures
struct CatFoodInfo {
    int skuNumber;
    double productPrice;
    int Calories;
    double productWeight;
};

struct ReportData
{
    int skuNumber;
    double productPrice;
    int Calories;
    double productWeightPounds;
    double productWeightKilos;
    int productWeightGrams;
    double servings;
    double cost_Per_Serving;
    double caloriesCost_Per_Serving;
};


// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int*);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double*);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(int);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(int);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(int, double*, int, double*);

// 7. Logic entry point
void start(void);


// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* pounds, double* resulttokg);

// 9. convert lbs: g
int convertLbsG(const double* pounds, int* rsulttog);

// 10. convert lbs: kg / g
void convertLbs(const double* pounds, double* resulttokg, int* resulttog);

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeGrams, const int totalGrams, double* numberOfServings);

// 12. calculate: cost per serving
double calculateCost_Per_Serving(const double* price, const double* numberOfServings, double* result);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* Calories, double* result);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo info);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData Data, const int cheapestProductCheck);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo info);

// ----------------------------------------------------------------------------

// 7. Logic entry point 
void start(void);



