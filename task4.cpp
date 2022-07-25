#include <iostream>
#include <cmath>
using namespace std;
int leapYears(int sYear, int eYear);
string leap(int year);
main()
{
    int sYear, eYear;
    int res1;
    cout << "Enter starting year:- ";
    cin >> sYear;
    cout << "Enter ending year:- ";
    cin >> eYear;
    res1 = leapYears(sYear, eYear);

    cout << res1;
}
string leap(int year)
{
    if ((year % 4 == 0 && year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        return "true";
    }
    else if ((year % 4 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 100 != 0))
    {
        return "false";
    }
    else
    {
        return "";
    }
}
int leapYears(int sYear, int eYear)
{
    string res;
    int res1 = 0;
    sYear = sYear + 1;
    res = leap(sYear);
    if (res == "true")
    {
        res1 = 1;
    }
    sYear = sYear + 1;
    res = leap(sYear);
    if (res == "true")
    {
        res1 = res1 + 1;
    }
    sYear = sYear + 1;
    res = leap(sYear);
    if (res == "true")
    {
        res1 = res1 + 1;
    }
    sYear = sYear + 1;
    res = leap(sYear);
    if (res == "true")
    {
        res1 = res1 + 1;
    }
    sYear = sYear + 1;
    res = leap(sYear);
    if (res == "true")
    {
        res1 = res1 + 1;
    }
    sYear = sYear + 1;
    res = leap(sYear);
    if (res == "true")
    {
        res1 = res1 + 1;
    }
    sYear = sYear + 1;
    res = leap(sYear);
    if (res == "true")
    {
        res1 = res1 + 1;
    }
    sYear = sYear + 1;
    res = leap(sYear);
    if (res == "true")
    {
        res1 = res1 + 1;
    }
    sYear = sYear + 1;
    res = leap(sYear);
    if (res == "true")
    {
        res1 = res1 + 1;
    }
    return res1;
}
