#include <iostream>
#include <cmath>
using namespace std;
void years(int hYear);
main()
{
    int hYear;
    cout << "Enter human year:- ";
    cin >> hYear;
    years(hYear);
}

void years(int hYear)
{
    int cYear, Dyear;
    string res;
    if (hYear == 1)
    {
        cYear = 15;
        Dyear = 15;
        cout << "Human Years = " << hYear << endl
             << "Cat Years = " << cYear << endl
             << "Dog Years = " << Dyear << endl;
    }
    else if (hYear == 2)
    {
        cYear = 24;
        Dyear = 24;
        cout << "Human Years = " << hYear << endl
             << "Cat Years = " << cYear << endl
             << "Dog Years = " << Dyear << endl;
    }
    else if (hYear > 2)
    {
        cYear = 24 + (4 * (hYear - 2));
        Dyear = 24 + (5 * (hYear - 2));
        cout << "Human Years = " << hYear << endl
             << "Cat Years = " << cYear << endl
             << "Dog Years = " << Dyear << endl;
    }
}