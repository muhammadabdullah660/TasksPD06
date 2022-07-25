#include <iostream>
#include <cmath>
using namespace std;
int a = 10;
int b = 20;
int sum()
{
    a = 40;
    return a + b;
}

main()
{
    a = 100;
    b = sum();
    cout
        << a << " " << b;
}
