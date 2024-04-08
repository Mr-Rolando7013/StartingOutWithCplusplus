/*An electronics company sells circuit boards at a 40 percent profit.
Write a program that will calculate the selling price of a circuit board that costs
$12.67. Display the result on the screen.*/

#include <iostream>

using namespace std;

int main()
{
    float profit = 40, costs = 12.67;

    cout << "Circuit board selling price: " << costs + (costs * 0.4) << "\n";

    return 0;
}
