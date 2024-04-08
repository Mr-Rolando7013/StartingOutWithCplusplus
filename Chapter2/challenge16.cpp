/*Write a program that displays the following pattern on the screen:

    *
   ***
  *****
 ********
  *****
   ***
    *

*/

#include <iostream>

using namespace std;

int main()
{
    int rows = 7;

    for (int i = 0; i < (rows + 1) / 2; i++) {
        for (int j = 0; j < rows / 2 - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = (rows - 1) / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < rows / 2 - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
