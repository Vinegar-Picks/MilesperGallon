#include <iostream>
using namespace std;
double TravelExpense(double, double, double);

int main()
{
    double mtod, gp, mpg;
    cout << "Travel Expense App\n";
    cout << "==================\n\n";
    cout << "Enter miles you intend to drive ==>";
    cin >> mtod;
    cout << "Enter current gas prices ==>";
    cin >> gp;
    cout << "Enter your car's miles per gallon ==>";
    cin >> mpg;
    double exp = (mtod, gp, mpg);
    cout << "The sum is ==>" << TravelExpense(mtod, gp, mpg) << endl;
}


double TravelExpense(double mtod, double gp, double mpg)
{
    double e = (mtod / mpg) * gp;
    return e;
}