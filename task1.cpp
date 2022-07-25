#include <iostream>
using namespace std;
string gen(int num, char ch);
main()
{
    int num;
    char ch;
    string res;
    cout << "Enter a number:- ";
    cin >> num;
    cout << "Enter a character(m/f):- ";
    cin >> ch;
    res = gen(num, ch);
    cout << res;
}

string gen(int num, char ch)
{
    string res;
    if (num == -3 && ch == 'm')
    {
        res = "great grandfather";
    }
    else if (num == -3 && ch == 'f')
    {
        res = "great grandmother";
    }
    else if (num == -2 && ch == 'm')
    {
        res = "grandfather";
    }
    else if (num == -2 && ch == 'f')
    {
        res = "grandmother";
    }
    else if (num == -1 && ch == 'm')
    {
        res = "father";
    }
    else if (num == -1 && ch == 'f')
    {
        res = "mother";
    }
    else if (num == 0 && (ch == 'f' || ch == 'm'))
    {
        res = "me!";
    }
    else if (num == -3 && ch == 'f')
    {
        res = "great grandmother";
    }
    else if (num == 1 && ch == 'm')
    {
        res = "son";
    }
    else if (num == 1 && ch == 'f')
    {
        res = "daughter";
    }
    else if (num == 2 && ch == 'm')
    {
        res = "grandson";
    }
    else if (num == 2 && ch == 'f')
    {
        res = "granddaughter";
    }
    else if (num == 1 && ch == 'm')
    {
        res = "great grandson";
    }
    else if (num == 1 && ch == 'f')
    {
        res = "great granddaughter";
    }
    return res;
}