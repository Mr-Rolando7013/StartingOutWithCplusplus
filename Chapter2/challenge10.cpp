/*A car holds 12 gallons of gasoline and can travel 350 miles before refueling.
Write a program that calculates the number of miles per gallon the car gets.
Display the result on the screen.

Hint: Use the following formula to calculate miles-per-gallon:
MPG = Miles driven / Gallon of Gas used*/

#include <iostream>

using namespace std;

int main()
{
    int gallons = 12, miles = 350;

    cout << "Miles per gallon: " << miles / gallons << "\n";

    return 0;
}
