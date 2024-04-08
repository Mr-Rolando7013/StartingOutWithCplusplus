/*A bag of cookies hold 40 cookies. The calories information on the bag claims that
there are 10 "servings" in the bag and that a serving equals 300 calories. Write a
program that asks the user to input how many cookies they actually ate and then reports
how many calories were consumed.*/

#include <iostream>

using namespace std;

int main()
{
    int numberOfCookies = 40, numberOfServings = 10, caloriesPerServing = 300, totalCalories, userCookies;

    cout << "How many cookies did you ate? ";
    cin >> userCookies;

    totalCalories = (caloriesPerServing * numberOfServings) / numberOfCookies;

    cout << "You consumed: " << totalCalories / userCookies << " calories. \n";


    return 0;
}
