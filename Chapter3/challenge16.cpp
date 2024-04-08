/*Assuming there are no deposits other than the original investment,
the balance in a savings account after one year may be calculated as:

Amount = Principal * (1 + (Rate/T))^T

Principal is the balance in the savings acocunt, Rate is the interest rate, and T
is the number of times the interest is compounded during a year (T is 4 if interest
is compounded quarterly).

Write a program that asks for the principal, the interesta rate, and the number of times
the interest is compounded. It should display a report similar to

Interest Rate: 4.25%
Times compounded: 12
Principal: $1000.00
Interest: $43.34
Amount in savings: $1043.34
*/

#include <iostream>

using namespace std;

int main()
{
    float interestRate, timesCompounded, principal, interest, amountInSavings;

    cout << "Interest rate: ";
    cin >> interestRate;

    cout << "Times Compounded: ";
    cinn >> timesCompounded;

    cout << "Principal: ";
    cin >> principal;

    cout << "Interest: ";
    cin >> interest;

    cout << "Amount in savings: ";
    amount = principal * (1 + (interestRate/timesCompounded))^timesCompounded


    return 0;
}
