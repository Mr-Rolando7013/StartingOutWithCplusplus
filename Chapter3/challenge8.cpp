/*Many financial experts advice that property owners should insure their homes or buildings
for at least 80 percent of the amount it would cost to replace the structure. Write a
program that asks the user to enter the replacement cost of a building and then displays
the minimum amount of insurance he or she should buy for the property.*/

#include <iostream>

using namespace std;

int main()
{
    float buildingCost = 0;
    cout << "What is the building cost: ";
    cin >> buildingCost;

    cout << "Minimum insure: " << buildingCost * .8 << "\n";


    return 0;
}
