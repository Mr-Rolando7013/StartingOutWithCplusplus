/*A car with a 20-gallon gas tank averages 21.5 miles per gallon when driven in town
and 26.8 miles per gallon when driven on the highway. Write a program that calculates
and displays the distance the car can travel on one tank of gas when driven in town
and when driven on the highway.

Hint: The following formula can be used to calculate distance:
Distance = Number of gallons x Average Miles per gallon*/

#include <iostream>

using namespace std;

int main()
{
    float milePerGallonInTown = 21.5, gasTank = 20, milePerGallonInHighway = 26.8;

    cout << "Distance in town: " << milePerGallonInTown * gasTank << "\n";
    cout << "Distance in highway: " << milePerGallonInHighway * gasTank << "\n";

    return 0;
}
