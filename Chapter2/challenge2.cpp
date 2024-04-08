/*The East coast sales division of a company generates 62 percent of total sales.
Based on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $4.6 million in sales this year.*/

#include <iostream>

using namespace std;

int main()
{
    int salesPerYear = 4600000;
    int totalYears = salesPerYear * 62 / 100;
    cout << "East Coast will generate: " << totalYears << endl;



    return 0;
}
