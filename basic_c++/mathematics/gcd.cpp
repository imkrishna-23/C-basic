#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{

    int a, b;
    cout << "enter the first number" << endl;
    cin >> a;
    cout << "enter the second number" << endl;
    cin >> b;
    cout << "the gcd of these two number is  " << gcd(a, b);
    return 0;
}