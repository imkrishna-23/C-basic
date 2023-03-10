#include <iostream>
using namespace std;
bool pal(int n)
{
    int res = 0;
    int temp = n;
    while (temp != 0)
    {
        int lastdigit = temp%10;
        res = res*10 + lastdigit;
        temp = temp/10;
    }
    return(res == n);
}
int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << "the  num is " << pal(n);
    return 0;
}