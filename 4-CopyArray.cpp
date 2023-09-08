// 4. Write a program in C++ to copy the elements of one array into another array.

#include <iostream>
using namespace std;

int main()
{

    int size;
    printf("Enter array size: ");
    cin >> size;
    int main_array[size], copy_array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> main_array[i];
        copy_array[i] = main_array[i];
    }

    cout << " Main  Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << main_array[i] << " ";
    }

    cout << "\nCpoied Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << copy_array[i] << " ";
    }

    return 0;
}