#include <iostream>
using namespace std;
int counttrailingzero(int n)
{
    int res = 0;
    for (int i = 5; i < n; i = i * 5)
        res = res + n / i;
    return res;
}
int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << "the count of zero in factorial is " << counttrailingzero(n);
    return 0;
}