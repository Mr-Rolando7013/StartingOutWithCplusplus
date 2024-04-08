/*The Yukon Widget Company manufactures widgets that weigh 9.2 pounds each.
Write a program that calculates how many widgets are stacked on a pallet,
based on the total weight of the pallet. The program should ask the user how much the
pallet weighs by itself and with the widgets stacked on it.
It should then calculate and display the number of widgets stacked on the pallet.*/

#include <iostream>

using namespace std;

int main()
{
    float wigetWeigh = 9.2, totalWeight, numberOfWidgets;
    cout << "What is the total weight of the pallet? ";
    cin >> totalWeight;


    numberOfWidgets = totalWeight / wigetWeigh;

    cout << "There are: " << numberOfWidgets << "\n";

    return 0;
}
