/*A customer in a store is purchasing five items. The prices of the five items are:

Price of item 1 = $12.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $14.95
Price of item 5 = $3.95

Write a program that holds the prices of the five items in five variables. Display each item's price,
the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax is 6%*/

#include <iostream>

using namespace std;

int main()
{
    float item1 = 12.92, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;

    cout << "Item 1: " << item1 << " Tax: " << item1 * 0.06 << " Total: " << item1 + (item1 * 0.06) << "\n";
    cout << "Item 1: " << item2 << " Tax: " << item2 * 0.06 << " Total: " << item2 + (item2 * 0.06) << "\n";
    cout << "Item 1: " << item3 << " Tax: " << item3 * 0.06 << " Total: " << item3 + (item3 * 0.06) << "\n";
    cout << "Item 1: " << item4 << " Tax: " << item4 * 0.06 << " Total: " << item4 + (item4 * 0.06) << "\n";
    cout << "Item 1: " << item5 << " Tax: " << item5 * 0.06 << " Total: " << item5 + (item5 * 0.06) << "\n";

    return 0;
}
