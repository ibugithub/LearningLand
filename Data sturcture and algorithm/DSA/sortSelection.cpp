#include<iostream> 
using namespace std;


void printArray(int arr[100], int size) 
{
    for(int i = 0; i < size ; i++) 
    {
        cout << arr[i] << " ";
    }
}
int findMin(int arr[], int i, int size)
{ 
    int minIndex = i;
    for(int j = i + 1; j < size; j++)
    {
        if(arr[j] < arr[minIndex])
        {
            minIndex = j;
        }
    }
    return minIndex;
}
int main()
{
    int arr[100] = {50, 30, 40, 60, 20, 25, 15, 10};
    int size = 8;
    for(int i = 0; i < size-1; i++ ) 
    {
        int minIndex = findMin(arr, i, size);
        swap(arr[i], arr[minIndex]);
    }
    printArray(arr, size);
}