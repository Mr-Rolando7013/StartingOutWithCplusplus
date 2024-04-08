/*Write a program that can be used as a math tutor for a young student. The program
should display two random numbers to be added, such as

247 + 129

The program should then pause while the student works on the problem. WHen the student is ready to
check the answer, he or she can press a key and the program will display the correct solution.

247 + 129 = 376*/

#include <iostream>

using namespace std;

int main()
{
    string response;
    int number1, number2;

    number1 = rand() % 1000 + 1;
    number2 = rand() % 1000 + 1;

    cout << number1 << " + "  << number2 << endl;
    cout << "Press t to show answer..." << endl;
    cin >> response;

    if (response == "t")
    {
        cout << number1 + number2 << endl;
    }
    return 0;
}
