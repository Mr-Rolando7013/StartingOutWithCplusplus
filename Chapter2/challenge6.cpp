/*Suppose an employee gets paid every two weeks and earns $1700.00 each pay period.
In a year the employee gets paid 26 times. Write a program that defines the following
variables:

payamount   This variable will hold the amount of pay the employee earns each pay period. Initialize the variable with 1700.0
payperiods  This variable will hold the number of pay periods in a year. Initialize the variable with 26
annualpay   This variable will hold the employee's total annual pay, which will be calculated.

The program should calculate the employee's total annual pay by multiplying the employee's pay amount
by the number of pay periods in a year, and store the result in the annualPay variable. Display the total
annual pay on the screen.*/

#include <iostream>

using namespace std;

int main()
{
    float payamount = 1700.0, payperiods = 26, annualpay;

    annualpay = payamount * payperiods;

    cout << "Annual pay: " << annualpay << "\n";
    return 0;
}
