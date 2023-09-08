// 2. Write a program in C++ to read n number of values in an array and display them in reverse order.

#include <iostream>
using namespace std;

int main()
{

    int n;
    printf("Enter array size: ");
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << "\nReversed Array: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }

    return 0;
}