/*Write a program that computes the tax and tip on a restaurant bill for a patron with a
$44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 15
percent of the total after adding the tax. Display the meal cost, tax amount, tip amount,
and total bill on the screen.*/

#include <iostream>

using namespace std;

int main()
{
    float mealCharge = 44.50;
    float tax = 44.50 * 0.0675;
    float tip = 44.50 * 0.15;

    float total = mealCharge + (tax + tip);
    cout << "Tax: " << tax << " Tip: " << tip << " Total: " << total << endl;
    //cout << 'The total will be: ' << total << "\n";


 return 0;
}
