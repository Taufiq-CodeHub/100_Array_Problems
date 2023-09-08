// 3. Write a program in C++ to find the sum of all elements of the array.


#include <iostream>
using namespace std;

int main()
{

    int size, sum = 0;
    printf("Enter array size: ");
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        sum += array[i];
    }

    cout << "The sum of all elements of Array is: " << sum;

    return 0;
}