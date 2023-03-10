#include <iostream>
using namespace std;
int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
            return res;
        res++;
    }
    return res;
}
int main()
{

    int a, b;
    cout << "enter the first number" << endl;
    cin >> a;
    cout << "enter the second number" << endl;
    cin >> b;
    cout << "the lcm of these two number is  " << lcm(a, b);
    return 0;
}