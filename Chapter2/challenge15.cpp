/*Write a program that displays the following pattern on the screen:

    *
   ***
  *****
********
*/

#include <iostream>

using namespace std;

int main()
{
    int rows = 4;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
