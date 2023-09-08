// 1. Write a program in C++ to store elements in an array and print them.

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

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}