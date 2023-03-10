#include <iostream>
using namespace std;

int countDigit(int x)
{
    int res = 0;
    while (x > 0)
    {

        x = x / 10;
        res++;
    }
    return res;
}

int main()
{

    int x;
    cout << "enter the number" << endl;
    cin >> x;
    cout << "the count of digit is " << countDigit(x);
    return 0;
}