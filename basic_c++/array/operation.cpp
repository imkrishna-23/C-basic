// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the size of array" << endl;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     cout << "your array is :" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>

// int main()
// {
//     int n;
//     std::cout << "Enter the size of array: ";
//     std::cin >> n;

//     std::vector<int> array(n);
//     std::cout << "Enter " << n << " integers: ";
//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> array[i];
//     }

//     std::cout << "Your array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << array[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main()
// {
//     int n;
//     std::cout << "Enter the size of array: ";
//     std::cin >> n;

//     std::vector<int> array(n);
//     std::cout << "Enter " << n << " integers: ";
//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> array[i];
//     }
//     std::cout << "Your array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << array[i] << " ";
//     }
//     std::cout << std::endl;

//     // Sort the array in ascending order
//     std::sort(array.begin(), array.end());

//     std::cout << "Your sorted array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << array[i] << " ";
//     }
//     std::cout << std::endl;

//     // Searching in the array
//     int search_value;
//     std::cout << "Enter the value to search: ";
//     std::cin >> search_value;

//     bool found = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (array[i] == search_value)
//         {
//             std::cout << "Found " << search_value << " at index " << i << std::endl;
//             found = true;
//             break;
//         }
//     }
//     if (!found)
//     {
//         std::cout << "Could not find " << search_value << " in the array" << std::endl;
//     }

//         return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int n;
    std::cout << "Enter the size of array : ";
    std::cin >> n;

    std::vector<int> array(n);
    std::cout << "Enter " << n << " integers :";
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
    std::cout << "Your array is : ";
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    // sorting of array

    std::sort(array.begin(), array.end());
    std::cout << "Your sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    int search_value;
    std::cout << "Enter the value to search: ";
    std::cin >> search_value;
 
    return 0;
}