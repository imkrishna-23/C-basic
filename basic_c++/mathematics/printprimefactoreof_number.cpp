#include <iostream>
using namespace std;

void sieve(int n)
{
    vector<bool> isprime(n + 1, true);
    for (i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (j = 2 * i; j <= n; j = j + i)
                isprime[i] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
            cout << i << " ";
    }
}

int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << "the prime factor of the number is " << sieve(int n);
    return 0;
}