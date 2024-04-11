#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

const int NUM_PRODS = 9;

void dualSort(dSales[NUM_PRODS])
{
    for (int i = 0; i < NUM_PRODS; i++)
    {

    }

}

void calcSales(int iUnits[NUM_PRODS], double dPrices[NUM_PRODS], double dSales[NUM_PRODS], string sProdNom[NUM_PRODS])
{
    for (int i = 0; i < NUM_PRODS; i++)
    {
        dSales[i] = iUnits[i+1] * dPrices[i];
        cout << "Product: " << sProdNom[i+1] << " sold " << iUnits[i+1] << " units and had a sale of: " << dSales[i] << " dollars." << endl;

    }

}

int main()
{
    string sProdNum[10], sUnits[10], line, word, lines[NUM_PRODS];

    int iUnits[NUM_PRODS];

    double dSales[NUM_PRODS];

    double dPrices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95};

    fstream fin;

    fin.open("demetris2.csv", ios::in);

    int c = 0, iPosition = 0;

    while (getline(fin, line))
    {
        lines[c] = line;

        stringstream s(line);

        int i = 0;
        while (getline(s, word, ','))
        {
            cout << "Word: " << word << " i: " << i << endl;

            if (i == 0)
            {
                sProdNum[c] = word;
                cout << "Product Number: " << sProdNum[c] << endl;
            }
            if (i == 1)
            {
                sUnits[c] = word;
                cout << "Units Sold: " << sUnits[c] << endl;
            }

            i++;
        }

        c++;
    }

    for (int i = 1; i < 10; i++)
    {
        iUnits[i] = stoi(sUnits[i]);
        cout << "iUnits: " << iUnits[i] << endl;

    }

    cout << "Calc Sales: " << endl;
    calcSales(iUnits, dPrices, dSales, sProdNum);


    fin.close();
    return 0;
}
