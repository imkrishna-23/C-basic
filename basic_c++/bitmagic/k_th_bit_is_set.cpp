#include <iostream>
using namespace std;

void kthbit(int n, int k)
{
    if (n & (1 << (k - 1)) != 0)
        print("yes");
    else
        print("no");
}

int main()
{

    int n, k;
    cout << "enter the number" << endl;
    cin >> n;
    cout << "enter the k th number" << endl;
    cin >> k;
    cout << "the number is" << kthbit( n, k);
    return 0;
}