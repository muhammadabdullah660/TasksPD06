#include <iostream>
#include <cmath>
using namespace std;
string leap(int year);
main()
{
    int year;
    string res;
    cout << "Enter a year:- ";
    cin >> year;
    res = leap(year);
    cout << res;
}

string leap(int year)
{
    if ((year % 4 == 0 && year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        return "true";
    }
    else if ((year % 4 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 != 0))
    {
        return "false";
    }
    else
    {
        return "";
    }
}