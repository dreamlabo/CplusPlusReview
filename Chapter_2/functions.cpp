#include "functions.h"
#include <iostream>
#include <iomanip>

using namespace std;

int sumOfTwoNumbers(int a, int b){
    return a + b;
}

void salesPrediction(){
    int sales = 8600000;
    float percentTotalSales = .58;
    cout << "\n2. Sales Prediction:\n";
    cout << "\tThe East coast Division will generate $" << sales * percentTotalSales << " in revenue this year." << endl;
}


void salesTaxes(){
    double purchase = 95.00;
    double stateTax = .04;
    double countyTax = .02;
    cout << fixed << setprecision(2);
    cout << "\n3. Sales Tax:\n";
    cout << "\tThe total sales tax on a $" << purchase << " is $" << purchase * (stateTax + countyTax) << ".\n";
}

void restaurantBill(){
    float bill = 88.67;
    float taxRate = .0675;
    float tipAmt = .20;
    cout << "\n4. Restaurant Bill\n";
    cout << "\tMeal Cost: $" << bill << endl;
    cout << "\tTax: $" << bill * taxRate << endl;
    cout << "\tTip: $" << bill * tipAmt << endl;
    cout << "\tTotal Bill: $" << bill + (taxRate * bill) + (bill * tipAmt) << endl;
}