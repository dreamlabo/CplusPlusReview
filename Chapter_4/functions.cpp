#include "functions.h"
#include <iostream>
#include <iomanip>

using namespace std;

void minimumMaximum(){
    cout << "\n1. Minimum/Maximum";

    int first, second, smaller, larger;
    cout << "\n\tPlease enter two numbers (separated by a space) and I will tell you which is smaller, and which is larger: ";
    cin >> first >> second;

    // The book asked us to use the conditional operator here (expression ? expression : expression;)
    smaller = (first < second) ? first : second;
    larger = (first < second) ? second : first;
    cout << "\t\tThe smaller number is: " << smaller;
    cout << "\n\t\tThe larger number is " << larger;
}

void romanNumeralConverter() {
    cout << "\n\t2. Roman Numeral Converter";

    int number;
    cout << "\tPlease enter a number between 1 and 10: ";
    cin >> number;
    while (number < 1 || number > 10) {
        cout << "\t\t" << number << " is not a valid input, please enter a number between 1 and 10, inclusive. ";
        cin >> number;
    }
    cout << "\n\t\tThe number " << number << " is ";

    switch (number){
        case 1:
            cout << "\"I\" in roman numerals.";
            break;
        case 2:
            cout << "\"II \" in roman numerals.";
            break;
        case 3:
            cout << "\"III\" in roman numerals.";
            break;
        case 4:
            cout << "\"IV\" in roman numerals.";
            break;
        case 5:
            cout << "\"V\" in roman numerals.";
            break;
        case 6:
            cout << "\"VI\" in roman numerals.";
            break;
        case 7:
            cout << "\"VII\" in roman numerals.";
            break;
        case 8:
            cout << "\"VIII\" in roman numerals.";
            break;
        case 9:
            cout << "\"IX\" in roman numerals.";
            break;
        case 10:
            cout << "\"X\" in roman numerals.";
            break;
        default:
            cout << "Error";
    }
    cout << endl;
}

void softwareSales(){
    cout << "\n\t12. Software Sales.";
    const int PACKAGE_COST = 99;
    const double DISC_1 = .80;
    const double DISC_2 = .70;
    const double DISC_3 = .60;
    const double DISC_4 = .50;
    int unitsSold;
    double totalBeforeDisc;

    cout << "\n\t\tPlease enter the number of units sold: ";
    cin >> unitsSold;

    // check for valid input
    while(unitsSold < 1){
        cout << "\t\t" << unitsSold << " is not valid input. Please enter the number of units sold: ";
        cin >> unitsSold;
    }

    totalBeforeDisc = unitsSold * PACKAGE_COST;
    cout << fixed << setprecision(2);
    if (unitsSold < 10){
        cout << "\t\tPurchase Total: $" << totalBeforeDisc;
    }
    else if (unitsSold <= 19){
        cout << "\t\tPurchase Total: $" << (totalBeforeDisc * DISC_1);
    }
    else if (unitsSold <= 49){
        cout << "\t\tPurchase Total: $" << (totalBeforeDisc * DISC_2);
    }
    else if (unitsSold <= 99){
        cout << "\t\tPurchase Total: $" << (totalBeforeDisc * DISC_3);
    }
    else{
        cout << "\t\tPurchase Total: $" << (totalBeforeDisc * DISC_4);
    }
}
