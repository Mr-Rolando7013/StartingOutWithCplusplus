/*Write a program that calculates the average rainfall for three months.
The program should ask the user to enter the name of each month, such as June or July,
and the amount of rain (in inches) that fell each month. The program should display a message
similar to the following:
The average rainfall for June, July, and August is 6.72 inches.*/

#include <iostream>

using namespace std;

int main()
{
    string month1, month2, month3;
    double rainMonth1, rainMonth2, rainMonth3, average;

    cout << "Name of month: ";
    cin >> month1;

    cout << "Amount of rain: ";
    cin >> rainMonth1;

    cout << "Name of month: ";
    cin >> month2;
    cout << "Amount of rain: ";
    cin >> rainMonth2;

    cout << "Name of month: ";
    cin >> month3;
    cout << "Amount of rain: ";
    cin >> rainMonth3;

    average = (rainMonth1 + rainMonth2 + rainMonth3) / 3;

    cout << "The average is: " << average << "\n";

    return 0;
}
