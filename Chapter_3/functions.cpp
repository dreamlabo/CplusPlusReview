#include "functions.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

void milesPerGallon(){
    float gallons;
    int miles;
    cout << "\n1. Miles per Gallon\n";
    cout << "\tPlease enter the number of gallons the car can hold: ";
    cin >> gallons;
    cout << "\tPlease enter the number of miles the car can be driven on a full tank: ";
    cin >> miles;
    cout << fixed << setprecision(2);
    cout << "\tMiles per gallon: " << miles/gallons << " mpg.\n";
}

void stadiumSeating(){
    cout << "\n2. Stadium Seating";

    int price_A = 15;
    int price_B = 12;
    int price_C = 9;
    int classA, classB, classC;

    cout << "\n\tHow many Class A seats were sold? ";
    cin >> classA;

    cout << "\tHow many Class B seats were sold? ";
    cin >> classB;

    cout << "\tHow many Class C seats were sold? ";
    cin >> classC;

    cout << fixed << setprecision(2);
    cout << "\tIncome generated from tickets sales: $" <<
        static_cast<float>((price_A * classA) + (price_B * classB) + (price_C * classC));
}

void testAverage(){
    int test1, test2, test3, test4, test5;
    int numTests = 5;
    cout << "\n3. Test Average";
    cout << "\n\tEnter 5 test scores (each seperated by a space: ";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    cout << fixed << setprecision(1);
    cout << "\tThe test average was: " << (test1 + test2 + test3 + test4 + test5)/numTests;
}

void averageRainfall(){
    cout << "\n4. Average Rainfall\n";
    int numMonths = 3;
    int rain1, rain2, rain3;
    string month1, month2, month3;

    cout << "\tEnter Month 1 name: ";
    getline(cin, month1);
    cout << "\tEnter the rainfall in inches for " << month1 << ": ";
    cin >> rain1;

    cout << "\tEnter Month 2 name: ";
    cin.ignore();
    getline(cin, month2);
    cout << "\tEnter the rainfall in inches for " << month2 << ": ";
    cin >> rain2;

    cout << "\tEnter Month 3 name: ";
    cin.ignore();
    getline(cin, month3);
    cout << "\tEnter the rainfall in inches for " << month3 << ": ";
    cin >> rain3;

    cout << "\tThe average rainfall for " << month1 << ", " << month2 << " and " << month3 << " was "
        << (rain1 + rain2 + rain3)/numMonths << " inches.";
}

void angleCalculator(){
    cout << "\n22. Angle Calculator";

    float angle;
    float sine, cosine, tangent;

    cout << "\n\tPlease enter the angle in radians: ";
    cin >> angle;
    cout << fixed << setprecision(4);
    cout << "\n\t" << left <<  setw(10) << "Sine: " << right <<  setw(10) << sin(angle);
    cout << "\n\t" << left << setw(10) << "Cosine: " << right << setw(10) << cos(angle);
    cout << "\n\t" << left << setw(10) <<  "Tangent: " << right << setw(10) << tan(angle);
}