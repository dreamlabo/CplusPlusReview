#include <iostream>
#include "functions.h"

using namespace std;
int main() {
    cout << "\nA few exercises from Chapter 2 of \"C++, From Control Structures through Objects.\"\n";
    int a = 50;
    int b = 100;
    cout << "\n1. Sum of Two Numbers:\n";
    int total = sumOfTwoNumbers(a, b);
    cout << "\tThe sum of " << a << " and " << b << " is " << total << ".\n";


    salesPrediction();
    salesTaxes();
    restaurantBill();

    return 0;
}
/////