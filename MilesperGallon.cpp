#include <iostream>
using namespace std;
void TravelExpense(double, double, double);

int main()
{
    double m, g, mpg;
    cout << "Travel Expense App\n";
    cout << "==================\n\n";
    cout << "Enter miles you intend to drive ==> ";
    cin >> m;
    cout << "Enter current gas prices ==> ";
    cin >> g;
    cout << "Enter your car's miles per gallon ==> ";
    cin >> mpg;
    TravelExpense(m, g, mpg);
}


void TravelExpense(double mtod, double gp, double mpg)
{
    cout << "The cost is ==> $" << ((mtod/mpg)*gp) << endl;
}