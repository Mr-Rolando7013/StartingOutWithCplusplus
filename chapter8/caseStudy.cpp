#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <typeinfo>

using namespace std;

int binarySearch(string iList[10], string iValue)
{
    int first = 0, last = 9, middle, position = -1;
    bool found = false;

    while(!found && first <= last)
    {
        middle = (first + last)/2;
        cout << "iList[middle]:" << iList[middle] << typeid(iList[middle]).name() << " iValue: " << iValue << typeid(iValue).name() << endl;
        if (iList[middle] == " " + iValue)
        {
            found = true;
            position = middle;
            return position;
        }
        else if(iList[middle] > iValue)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    return position;

}

void displayProd(string productTitle[10], string productDescription[10], string productNumber[10], string productPrice[10], int iPosition)
{

    cout << "Product Title: " << productTitle[iPosition] << endl;
    cout << "Product Description: " << productDescription[iPosition] << endl;
    cout << "Product Number: " << productNumber[iPosition] << endl;
    cout << "Product Price: " << productPrice[iPosition] << endl;


}

int getProdNum(string productNumber[10])
{
    int iNumber, iPosition;
    string sNumber;

    cout << "Type product number: ";
    cin >> sNumber;

    if (sNumber >= "914" && sNumber <= "922")
    {
        iPosition = binarySearch(productNumber, sNumber);
        return iPosition;


    }
    else
    {
        cout << "Invalid number..." << endl;
        return -1;
    }
    return -1;

}

int main()
{
    // File pointer
    fstream fin;
    int rows[10];

    // Open an existing file
    fin.open("demetris.csv", ios::in);
    string productTitle[10], productDescription[10], productPrice[10], line, word, lines[10], productNumber[10];
    int c = 0, iPosition = 0;

    while (getline(fin, line))
    {
        //cout << "Line: " << line << endl;
        lines[c] = line;

        stringstream s(line);

        int i = 0;
        while (getline(s, word, ','))
        {

            if (i == 0)
            {
                productTitle[c] = word;
                cout << "Product Title: " << productTitle[c] << endl;
            }
            if (i == 1)
            {
                productDescription[c] = word;
                cout << "Product Description: " << productDescription[c] << endl;
            }
            if (i == 2)
            {
                productNumber[c] = word;
                cout << "Product Number: " << productNumber[c] << endl;
            }
            if (i == 3)
            {
                productPrice[c] = word;
                cout << "Product Price: " << productPrice[c] << endl;
            }

            i++;
        }

        c++;
    }
    fin.close();

    iPosition = getProdNum(productNumber);
    //cout << "iPosition: " << iPosition << endl;
    displayProd(productTitle, productDescription, productNumber, productPrice, iPosition);


    return 0;
}
