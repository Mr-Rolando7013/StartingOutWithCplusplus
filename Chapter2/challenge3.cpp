/*Write a program that will compute the total sales tax on a $52 purchase.
Assume the state sales tax is 4 percent and the county sales tax is 2 percent*/

#include <iostream>

using namespace std;

int main()
{
    int salesTaxState = 4;
    int countyTaxState = 2;
    int totalSaleTax;
    totalSaleTax = 52 * 0.04;
    totalSaleTax = totalSaleTax + (52 * 0.02);
    cout << "Price will be: " << totalSaleTax << endl;



    return 0;
}
