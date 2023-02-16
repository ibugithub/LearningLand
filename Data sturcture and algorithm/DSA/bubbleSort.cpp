#include <iostream>
using namespace std;

// // Bubble sort to sort an array .........it was my first try to solve it .....
// void printArray(int arr[], int size)
// {
//     for(int i = 0; i < size; i ++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main ()
// {
//     int arr[100] = {2053, 533, 884, 3, 10, 134, 243, 250, 33, 2, 5, 23, 535};
//     int temp = 0;
//     int size = 13;
//     int count = 0;
//     for(int i = 0; i < size - 1; i ++)
//     {
//         if (i == 0)
//         {
//             temp = 0;
//         }
//         count += 1;
//         if(arr[i] > arr[i + 1])
//         {
//             swap(arr[i], arr[i + 1]);
//             temp = 1;
//         }
//         if(i == (size - 2) && temp == 1)
//         {
//             i = -1;
//         }
//     }
//     printArray(arr, size);
//     cout << count;
// }













// Bubble sort to sort an array ... more optimised way.....
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100] = {2053, 533, 884, 3, 10, 134, 243, 250, 33, 2, 5, 23, 535};
    // int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int size = 13;
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        count += 1;
        int temp = 1;
        for (int j = 0; j < size - i; j++)
        {
            count += 1;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                temp = 0;
            }
        }
        if (temp)
            break;
    }
    printArray(arr, size);
    cout << count;
}
