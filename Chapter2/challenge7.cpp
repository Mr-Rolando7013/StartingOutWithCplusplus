/*Assuming the ocean's level is currently rising about 1.5 milimeters per year,
write a program that displays:

-   The number of milimeters of higher than now the ocean's level will be in 5 years.
-   The number of milimeters of higher than now the ocean's level will be in 7 years.
-   The number of milimeters of higher than now the ocean's level will be in 10 years.*/

#include <iostream>

using namespace std;

int main()
{
    float oceanLevel = 1.5;

    cout << "Ocean Level in 5 years: " << oceanLevel * 5 << "\n";
    cout << "Ocean Level in 7 years: " << oceanLevel * 7 << "\n";
    cout << "Ocean Level in 10 years: " << oceanLevel * 10 << "\n";

    return 0;
}
