/*A retail company must file a monthly sales tax report listing the sales
for the month and the amount of sales tax collected. Write a program that asks
for the month, the year, and the total amount collected at the cash register
(that is, sales plus sales tax). Assume the state sales tax is 4 percent and the
county sales tax is 2 percent.

If the total amount collected is known and the total sales tax is 6 percent, the
amount of product sales may be calculated as:
s = (T/1.06)

s is the product sales and T is the total income (product sales plus sales tax).
The program should display a report similar to
Month: October
------------------
Total collected: $26572.89
Sales: $25068.76
County Sales Tax: $501.38
State sales tax: $1002.75
Total sales tax: $1504.13
*/

#include <iostream>

using namespace std;

int main()
{
    float totalCollected, sales, countySalesTax, stateSalesTax, totalSalesTax;

    cout << "Total collected: ";
    cin >> totalCollected;
    sales = totalCollected / 1.06;
    cout << "Sales: " << sales << endl;
    countySalesTax = sales * 0.02;
    cout << "County Sales Tax: " << countySalesTax << endl;
    stateSalesTax = sales * 0.04;
    cout << "State Sales Tax: " << stateSalesTax << endl;
    totalSalesTax = countySalesTax + stateSalesTax;
    cout << "Total Sales Tax: " << totalSalesTax << endl;


    return 0;
}
