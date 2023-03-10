#include <iostream>
using namespace std;
bool prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << "if result show 1 it means prime and 0 means not prime " << endl;
    cout << "the number is  " << prime(n);
    return 0;
}