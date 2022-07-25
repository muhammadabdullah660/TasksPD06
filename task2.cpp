#include <iostream>
#include <cmath>
using namespace std;
double vol(float l, float w, float h, string unit);
main()
{
    float l, w, h, res;
    string unit;
    cout << "Enter length in meters:- ";
    cin >> l;
    cout << "Enter width in meters:- ";
    cin >> w;
    cout << "Enter height in meters:- ";
    cin >> h;
    cout << "Enter unit:- ";
    cin >> unit;
    res = vol(l, w, h, unit);
    cout << res << " cubic " << unit;
}

double vol(float l, float w, float h, string unit)
{
    double res;
    if (unit == "centimeters")
    {
        l = l * 100;
        w = w * 100;
        h = h * 100;
        res = (l * w * h) / 3;
    }
    else if (unit == "kilometers")
    {
        l = l / 1000;
        w = w / 1000;
        h = h / 1000;
        res = (l * w * h) / 3.0;
    }
    else if (unit == "millimeters")
    {
        l = l * 1000;
        w = w * 1000;
        h = h / 1000;
        res = (l * w * h) / 3.0;
    }

    return res;
}