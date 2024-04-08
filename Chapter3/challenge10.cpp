/*Write a program that converts centigrade temperatures to fahrenheit temperatures.
The formula is: F = (9/5)C + 32*/

#include <iostream>

using namespace std;

int main()
{
    float tempInC, tempInF;

    cout << "Temperature in centigrade: ";
    cin >> tempInC;

    tempInF = (9/5) * tempInC + 32;

    cout << "Temperature in fahrenheit: " << tempInF << endl;


    return 0;
}
