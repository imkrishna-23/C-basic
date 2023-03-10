#include <iostream>
using namespace std;
bool ispower2(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}
int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << "the number is " << ispower2(n);
    return 0;
}