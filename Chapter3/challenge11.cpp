/*Write a program that will convert U.S., dollar amounts to japanese Yen and to Euros.
The convertion factors are:
1 dollar - 134.33 yen
1 dollar - 1.1644 euros.

Format your currency amounts in fixed-points notation, with two decimal places of precision,
and be sure the decimal point is always displayed.*/

#include <iostream>

using namespace std;

int main()
{
    float dollarToYen = 134.33, dollarToEuro = 1.1644, dollarAmount;

    cout << "Input dollar amount: ";
    cin >> dollarAmount;

    cout << "You have: " << dollarAmount/dollarToEuro << " Euros! " << endl;
    cout << "You have: " << dollarAmount * dollarToYen << " Yens! " << endl;


    return 0;
}
