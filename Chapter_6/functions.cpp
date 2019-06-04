#include "functions.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Chapter 6 (Functions)

// Exercise 1
void runMarkup() {
    cout << "\n\t1. Markup.";

    float  wholesale;
    float markup;
    cout << "\n\t\tPlease enter the wholesale cost of the item: ";
    cin >> wholesale;
    cout << "\t\tPlease enter the markup percentage: ";
    cin >> markup;
    cout << fixed << setprecision(2) <<  "\t\tTotal cost of item = $" <<  calculateRetail(wholesale, markup) << "\n";
}

float calculateRetail(float wholesale, float markup){
    return (markup * wholesale) + wholesale;
}

// Exercise 2
// Rectangle Area
void runRectangleArea(){
    cout << "\n\t2. Rectangle Area";
    displayData(getArea(getWidth(), getLength()));
}

double getLength() {
    double length;
    cout << "\n\t\tPlease enter the length of the rectangle: ";
    cin >> length;
    return length;
}

 double getWidth(){
     double width;
     cout << "\t\tPlease enter the width of the rectangle: ";
     cin >> width;
     return width;
 }

 double getArea(double length, double width){
    return length * width;
}

void displayData(double area){
    cout << "\t\tThe area of the triangle is: " << area << endl;
}