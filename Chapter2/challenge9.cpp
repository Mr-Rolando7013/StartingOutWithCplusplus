/*In order to accomplish some calculations, you need to know how many bytes the following data types use:
char, int, float, and double. You do not have any mannuals, so you can't look this information up.
Write a c++ program that will determine the amount of memory used by these types and display the information
on the screen:*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;

    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;

    cout << "Size of double : " << sizeof(double) << endl;


    return 0;
}
