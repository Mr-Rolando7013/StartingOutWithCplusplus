/*Write a program that asks for five test scores.
The program should calculate the average test score and display it.
The number displayed should be formatted in fixed-point notation, with one
decimal point of precision.*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    double testScore1 = 0, testScore2 = 0, testScore3 = 0, testScore4 = 0, testScore5 = 0;
    double average = 0;

    cout << "Test Score 1: ";
    cin >> testScore1;

    cout << "Test Score 2: ";
    cin >> testScore2;

    cout << "Test Score 3: ";
    cin >> testScore3;

    cout << "Test Score 4: ";
    cin >> testScore4;

    cout << "Test Score 5: ";
    cin >> testScore5;

    average = (testScore1 + testScore2 + testScore3 + testScore4 + testScore5) / 5;

    cout << "Average is: " << setprecision(3) << average << "\n";

    return 0;
}
