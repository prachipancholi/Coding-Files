#include <iostream>
using namespace std;

int power(int x, int y)
{
    int temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main()
{
    int n1, n2;
    cout << "20BCS1334- Prachi Pancholi\n";
    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;
    cout << power(n1, n2);
    return 0;
}