/*Madison County provides a $5000 homeowner exemptions for its senior citizens.
For example, if their house is valued at $158,000 its assessed value would be $94,800,
as explained above. However they would only pay tax on $89,800.. At last year;s tax rate
of $2.64 for each $100 of assessed value, their property tax would be $2,370.72. In addition to the tax break,
senior citizens are allowed to pay their property tax in 4 equal payments.
The quarterly payment due on this property would be $592.68. Write a program that asks the user
to input the actual value of a piece of property and the current tax rate for each $100 of assessed value.
The program should then calculate and report how much annual property tax a senior homeowner will be
charged for this property and what their quearterly tax bill will be.*/

#include <iostream>

using namespace std;

int main()
{
    float propertyValue, currentTaxRate, annualPropertyTax, quarterlyTaxBill, homeOwnerExemptions = 5000, tax;

    cout << "Property Value: ";
    cin >> propertyValue;
    cout << "Current tax rate: ";
    cin >> currentTaxRate;

    propertyValue = propertyValue - homeOwnerExemptions;


    tax = propertyValue * (currentTaxRate / 100);

    quarterlyTaxBill = tax / 4;

    cout << "Quarterly bill: " << quarterlyTaxBill << endl;


    return 0;
}
