#include<iostream>
using namespace std;


// Finding the first and last occarance of any number within an array..........
// int search(int arr[], int size, int key)
// {
//     int i = 0;
//     int start = 0;
//     int end = size - 1 ;
//     int mid = start + (end - start) / 2;
//     int first;
//     int last;
//     while(start <= end)
//     {
//         if (key == arr[mid])
//         {
//             cout << "The key is" << " "  <<arr[mid] <<endl;
//             first = mid;
//             while(arr[first] == key)
//             {
//                 first--;
//             }
//             first = first + 1;
//             cout <<"The first  occrance is " << first <<endl;
//             int last = mid;
//             while(arr[last] == key) 
//             {
//                 last++;
//             }
//             last = last - 1;
//             cout <<"The last  occrance is " << last <<endl;
//             cout <<"Total occarance is " <<" " <<last - first + 1;
//             return mid; 
//         }
//         else if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start +(end - start) /2;
//     }
//     return -1;
// }
// int main()
// {

// int even[100]= {15, 17, 18, 19, 19, 19, 19, 19, 19, 29, 30};
// int evenSize = 11;
// int evenk = 19 ;
// search (even, evenSize, evenk);
// }








// Finding the peak ..................
// int main() 
// {
//     int arr[100] = {0, 10, 5, 2}; 
//     int size = 4;
//     int start = 0;
//     int end = size -1 ; 
//     int mid = start + (end - start) /2;
//     while(start <= end) 
//     {   cout << "the mid is " << mid <<endl;
//         cout << arr[mid - 1] << " " <<arr[mid] <<" " <<arr[mid + 1] <<endl;
//         if ((arr[mid] > arr[mid - 1]) && arr[mid] < arr[mid + 1])
//         {
//             start = mid + 1;
//             cout <<"inside the if" <<endl;
//         }
//         else if (arr[mid]  > (arr[mid + 1]) && arr[mid] < arr[mid -1])
//         {
//             end = mid -1;
//             cout <<"inside the else if" <<endl;
//         }
//         else{
//             cout << "This is the peak " << " " <<arr[mid];
//             break;
//         }
//         mid = start + (end - start) /2;
//     }
// }




// more optimised way of doing it..............
// int main() 
// {
//     int arr[100] = {2, 5, 6, 7, 8, 10, 2, 3}; 
//     int size = 8;
//     int start = 0;
//     int end = size -1 ; 
//     int mid = start + (end - start) /2;
//     while(start < end) 
//     {   cout << "the mid is " << mid <<endl;
//         cout << arr[mid - 1] << " " <<arr[mid] <<" " <<arr[mid + 1] <<endl;
//         if (arr[mid] < arr[mid + 1])
//         {
//             start = mid + 1;
//             cout <<"inside the if" <<endl;
//         }
//         else 
//         {
//             end = mid ;
//             cout <<"inside the else if" <<endl;
//         }

//         mid = start + (end - start) /2;
//     }
//     cout << start;   
// }








// Find  the pivot  from an  array..............
// int main() 
// {
//     int arr[100] = {14, 20, 22, 6}; 
//     int size = 4;
//     int start = 0;
//     int end = size -1 ; 
//     int mid = start + (end - start) /2;
//     while(start < end) 
//     {   cout << "the mid is " << mid <<endl;
//         cout << arr[mid - 1] << " " <<arr[mid] <<" " <<arr[mid + 1] <<endl;
//         if (arr[mid] > arr[0])
//         {
//             start = mid + 1;
//             cout <<"inside the if" <<endl;
//         }
//         else 
//         {
//             end = mid;
//             cout <<"inside the else if" <<endl;
//         }

//         mid = start + (end - start) /2;
//     }
//     cout << start;   
// }








// int main() 
// {
//     int arr[100] = {7, 9, 1, 2, 3}; 
//     int size = 5;
//     int start = 0;
//     int end = size -1 ; 
//     int key = 1;
//     int mid = start + (end - start) /2;
//     while(start < end) 
//     {   cout << "the mid is " << mid <<endl;
//         cout << arr[mid - 1] << " " <<arr[mid] <<" " <<arr[mid + 1] <<endl;
//         if (arr[mid] > arr[0])
//         {
//             start = mid + 1;
//             cout <<"inside the if" <<endl;
//         }
//         else 
//         {
//             end = mid;
//             cout <<"inside the else if" <<endl;
//         }

//         mid = start + (end - start) /2;
//     }
//     cout << "the pivot is" <<" " <<start <<endl; 


//     if(key > arr[0])
//     {
//         start = 0;
//         end = mid-1;
//     }
//     else
//     {
//         end = size -1;
//     }
//     mid = start + ((end - start) / 2);
//     cout <<"The start is " << start <<endl;
//     cout <<"The end is " <<end <<endl;
//     cout << "the mid is" <<mid <<endl;
//     while(start <= end) 
//     {
//         if(arr[mid] == key) 
//         {
//             cout <<"The key is " <<" " <<arr[mid] <<" " <<mid;
//             break;
//         }
//         else if(key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid -1;
//         }
//         mid = start + ((end - start) / 2);
//     }
    
// }









// Finding a number from an sorted rotated array...............    
// int pivot(int arr[100], int start, int end)
// {
//     int mid = start + (end - start) /2;
//     while(start < end) 
//     { 
//         if (arr[mid] > arr[0])
//         {
//             start = mid + 1;
//         }
//         else 
//         {
//             end = mid;
//         }
//         mid = start + (end - start) /2;
//     }
//     return start;
// }
// int search(int arr[100], int start, int end, int key)
// { 
//     int mid = start + (end - start) /2;
//     while(start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (key > arr[mid] )
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid -1;
//         }
//         mid = start + (end - start) /2;
//     }
//     return -1;
// }
// int main() 
// {
//     int arr[100] = {7, 9, 1, 2, 3};
//     int key = 1;
//     int size = 5;
//     int res;
//     int pivotVal = pivot(arr, 0, size - 1);
//     if(key >= arr[pivotVal] && key <= arr[(size - 1)])
//     {
//         res = search(arr, pivotVal, size -1, key);
//     }
//     else
//     {
//         res = search(arr, 0, pivotVal - 1, key);
//     }
//     cout << "the index of the key is " << " " << res;
// }










// finding squrt root of a number............... 
// int main () 
// {
//     int key = 65;
//     int start = 0;
//     int end = key;
//     double ans = -1;
//     long long int mid = start + (end - start) / 2;
//     double pression = .1;
//     int count = 9;
//     while(start <= end) 
//     {   long long int value = mid * mid;
//         if ((value) == key) 
//         {
//             cout << "The squart of " <<" " <<key <<" " <<"is" <<" " << mid;
//             break;
//         }
//         else if (key > value)
//         { 
//             ans = mid;
//             start = mid + 1;
//         }
//         else 
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     for(int i = 1; i < count;)
//     {
//         ans += pression;
//         cout <<ans <<endl;
//         if (ans*ans > key)
//         {
//             ans -= pression; 
//             pression /= 10;
//             i++;
//         }
//     }
//     cout << ans <<endl;
//     return ans;
// }















// Allocating book so that the maximum amount of book is minimum.......... my way of doing it
int sum(int arr[], int size)
{
    int sum = 0;
    for(int i = 1; i < size; i++)
    {
        sum +=arr[i];
    }
    return sum;
}
int allocate(int arr[100], int m, int start, int end, int size) 
{
    int mid = start + (end - start) /2;
    int ans;
    while(start <= end)
    {
        int count = 1;
        int value = 0;
        for(int i = 0; i <= size -1; i++)
        {
            value += arr[i];
            if (value > mid)
            {
                value = 0;
                count ++;
                i--;
            }
            if (count > m)
            {
                break;
            }
        }
        if (count == m || count < m)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (count > m)
        {
            start = mid + 1;
        }
        mid = start + (end - start)  /2;
    }
    return ans;
}
int main() 
{
    int arr[100] = {1, 2, 3, 4};
    int size = 4;
    int start = 0;
    int end = sum(arr, size);
    int m = 2;
    int ans = allocate(arr, m, start, end, size);
    cout << ans;
}






















// // Allocating book so that the maximum amount of book is minimum..........
// int sum(int arr[], int size)
// {
//     int sum = 0;
//     for(int i = 1; i < size; i++)
//     {
//         sum +=arr[i];
//     }
//     return sum;
// }
// int isPossible(int arr[], int m, int mid, int size) 
// {
//     int count = 1;
//     int value = 0;
//     for ( int i = 0; i < size; i++)
//     {
//         if (value + arr[i] <= mid)
//         {
//             value += arr[i];
//         }
//         else
//         {
//             count ++;
//             if (count > m || arr[i] > mid)
//             {
//                 return false;
//             }
//             value = arr[i];
//         }
//     }
//     return true;
// }
// int allocate(int arr[100], int m, int start, int end, int size) 
// {
//     int mid = start + (end - start) /2;
//     int ans;
//     while(start <= end)
//     {
//         if(isPossible(arr, m, mid, size)) 
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start)  /2;
//     }
//     return ans;
// }
// int main() 
// {
//     int arr[100] = {5, 17, 100, 11};
//     int size = 4;
//     int start = 0;
//     int end = sum(arr, size);
//     int m = 4;
//     int ans = allocate(arr, m, start, end, size);
//     cout << ans;
// }
































