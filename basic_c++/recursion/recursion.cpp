// #include <iostream>
// using namespace std;
// int fun(int n)
// {
//     if (n == 0)
//         return 0;
//     cout << "krishna" << endl;
//     fun(n - 1);
// }
// int main()
// {
//     fun(5);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fun(int n)
// {
//     if (n == 0)
//         return 0;
//     cout << n << endl;
//     fun(n - 1);
//     cout << n << endl;
// }
// int main()
// {
//     fun(5);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fun(int n)
// {
//     if (n == 0)
//         return 0;
//     fun(n - 1);
//     cout << n << endl;
//     fun(n - 1);
// }
// int main()
// {
//     fun(3);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fun(int n)
// {
//     if (n == 0)
//         return 0;
//     else
//         return 1 + fun(n / 2);
// }
// int main()
// {
//     fun(16);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fun(int n)
// {
//     if (n == 0)
//         return 0;
//     fun(n / 2);
//     cout << (n % 2) << endl;
// }
// int main()
// {
//     fun(66);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fun(int n)
// {
//     if (n == 0)
//         return 0;
//     fun(n - 1);
//     cout << n << endl;
// }
// int main()
// {
//     fun(10);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//         return n * fact(n - 1);
// }
// int main()
// {

//     int n;
//     cout << "enter the number" << endl;
//     cin >> n;
//     cout << "the  factorial " << fact(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fib(int x)
// {
//     if ((x == 1) || (x == 0))
//     {
//         return (x);
//     }
//     else
//     {
//         return (fib(x - 1) + fib(x - 2));
//     }
// }
// int main()
// {
//     int x, i = 0;
//     cout << "Enter the number of terms of series : ";
//     cin >> x;
//     cout << "\nFibonnaci Series : ";
//     while (i < x)
//     {
//         cout << " " << fib(i);
//         i++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int getsum(int x)
{
    if ((x == 1) || (x == 0))
    {
        return (x);
    }
    else
    {
        return x + getsum(x - 1);
    }
}
int main()
{
    int x;
    cout << "Enter the number  : ";
    cin >> x;
    cout << "The sum of the number is : 4";
    cout << getsum(x);

    return 0;
}