/*The are three seating categories at a stadium. For a softball game,
Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9.
Write a program that asks how many tickets for each class of seats were sold,
then displays the amount of income generated from ticket sales.
Format your dollar amount in fixed-point notation, with two decimal places of precision,
and be sure the decimal point is always displayed.*/

#include <iostream>

using namespace std;

int main()
{
    float ticketsClassA = 0, ticketsClassB = 0, ticketsClassC = 0;
    float totalClassA = 0, totalClassB = 0, totalClassC = 0;

    cout << "How many tickets for class A were sold: ";
    cin >> ticketsClassA;

    cout << "How many tickets for class B were sold: ";
    cin >> ticketsClassB;

    cout << "How many tickets for class C were sold: ";
    cin >> ticketsClassC;

    totalClassA = ticketsClassA * 15;
    totalClassB = ticketsClassB * 12;
    totalClassC = ticketsClassC * 9;

    cout << "The total money generated: " << totalClassA + totalClassB + totalClassC << "\n";


    return 0;
}
