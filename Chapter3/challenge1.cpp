/*Write a program that calculates a car's gas mileage.
The program should ask the user to enter the number of gallons of gas the car can hold,
and the number of miles it can be driven on a full tank. It should then display the number
of miles that may be driven per gallon of gas.*/

#include <iostream>

using namespace std;

int main()
{
    float gasThatTheCarCanHold = 0, milesDrivenFullTank = 0;
    cout << "Write the amount of gas the car can hold: ";
    cin >> gasThatTheCarCanHold;
    cout << "Write the miles driven with a full tank: ";
    cin >> milesDrivenFullTank;

    cout << "Total: " << milesDrivenFullTank / gasThatTheCarCanHold << "\n";




    return 0;
}
