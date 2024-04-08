/*Write a program that asks the user  to enter the monthly costs for the following
expenses incurred from operating his or her automobile: loan payment, insurance,
gas, oil tires, and maintenance. The program should then display the total monthly
cost of these expenses, and the total annual cost of these expenses.*/

#include <iostream>

using namespace std;

int main()
{
    float loanPayment = 0, insurance = 0, gas = 0, oilTires = 0, maintenance = 0, totalAnnualCost;
    cout << "Loan payment: ";
    cin >> loanPayment;
    cout << "Annual: " << loanPayment * 12 << endl;

    cout << "Insurance: ";
    cin >> insurance;
    cout << "Annual: " << insurance * 12 << endl;

    cout << "Gas: ";
    cin >> gas;
    cout << "Annual: " << gas * 12 << endl;

    cout << "Oil Tires: ";
    cin >> oilTires;
    cout << "Annual: " << oilTires * 12 << endl;

    cout << "Maintenance: ";
    cin >> maintenance;

    cout << "Annual: " << maintenance * 12 << endl;


    return 0;
}
