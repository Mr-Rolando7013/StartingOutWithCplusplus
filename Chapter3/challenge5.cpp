/*A movie theater only keeps a percentage of the revenue earned from ticket sales.
The remainder goes to the movie distributor. Write a program that calculates a theater's
gross and net box office profit for a night. The program should ask for the name of the movie,
and hoy many adult and child tickets were sold. (The price of an adult ticket is $6.00
and a child's ticket is $3.00) It should display report similart to:

Movie name: "Wheels of fury"
Adult tickets sold: 382
Child tickets sold: 127
Gross box office profit: $2673.00
Net box office profit: $534.60
Amount paid to distributor: $2138.40
Note: Assume the theater keeps 20 percent of the gross box office profit.*/

#include <iostream>

using namespace std;

int main()
{
    float priceAdultTicket = 6.00, priceOfChildTicket = 3.00, totalMoney = 0, amountPaidToDistributor = 0;
    string movieName;
    int numberOfAdultTickets = 0, numberOfChildTickets;

    cout << "Movie name: ";
    cin >> movieName;
    cout << "Adult tickets sold: ";
    cin >> numberOfAdultTickets;
    cout << "Child tickets sold: ";
    cin >> numberOfChildTickets;

    totalMoney = (numberOfAdultTickets * priceAdultTicket) + (numberOfChildTickets * priceOfChildTicket);
    amountPaidToDistributor = totalMoney * .2;
    cout << "Gross box office profit: " << totalMoney << "\n";
    cout << "Ammount paid to distributor: " << amountPaidToDistributor << "\n";



    return 0;
}
