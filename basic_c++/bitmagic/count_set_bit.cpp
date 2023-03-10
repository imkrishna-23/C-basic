#include <iostream>
using namespace std;
int countbit(int n)
{
    int res = 0;
    while (n > 0)
    {
        // if (n % 2 != 0)
        //     res++;
        // n = n / 2;
         
        n = (n & (n - 1));
        res++;
    }
    return res;
}
int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << "the count set bits are " << countbit(n);
    return 0;
}