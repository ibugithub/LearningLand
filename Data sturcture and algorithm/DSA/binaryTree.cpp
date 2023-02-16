#include <iostream>
using namespace std;

// int main()
// {
//     int arr[100] = {2, 5, 6, 9, 11, 13, 15, 17, 18, 21, 25, 26};
//     int size = 12;
//     int i = 0;
//     int start = 0;
//     int end = size;
//     int key = 7;
//     while(true)
//     {
//         int mid = (start + end) / 2;
//         cout << "the mid is " <<" " << mid <<endl;
//         if (key == arr[mid])
//         {
//             cout <<"Find the key " << " " <<arr[mid] <<endl;
//             break;
//         }
//         if (end - start < 2)
//         {
//             cout << "end - start is " <<" " <<end - start <<endl;
//             break;
//         }
//         else if ( arr[mid] > key)
//         {
//             end = mid;
//             cout << "The mid has been changed" <<" " <<mid  <<endl;
//         }
//         else
//         {
//             start = mid;
//             cout << "The mid has been changed" <<" " <<mid  <<endl;
//         }
//     }
// }

// void search(int k)
// {
//     int arr[100] = {15, 17, 18, 25, 27, 28, 30};
//     int size = 7;
//     int i = 0;
//     int start = 0;
//     int end = size ;
//     int key = k;
//     while(true)
//     {
//         int mid = (start + end) / 2;
//         // cout << "the mid is " <<" " << mid <<endl;
//         if (key == arr[mid])
//         {
//             cout <<"Find the key " << " " <<arr[mid] <<" " <<"the index is " <<" " <<mid <<endl;
//             break;
//         }
//         if (end - start < 2)
//         {
//             cout << "end - start is " <<" " <<end - start <<endl;
//             break;
//         }
//         else if ( arr[mid] > key)
//         {
//             end = mid;
//             // cout << "The mid has been changed" <<" " <<mid  <<endl;
//         }
//         else
//         {
//             start = mid;
//             // cout << "The mid has been changed" <<" " <<mid  <<endl;
//         }
//     }
// }

// int main()
// {
// int arr[100] = {15, 17, 18, 25, 26, 28, 30};
// int size = 7;
// for(int i = 0; i < size; i ++)
// {
//     search (arr[i]);
// }
// }









// Another way of doing it ............................
// int search(int arr[], int size, int key)
// {
//     int i = 0;
//     int start = 0;
//     int end = size - 1 ;
//     int mid = start + (end - start) / 2;
//     while(start <= end)
//     {
//         if (key == arr[mid])
//         {
//             cout << "The key is" << " "  <<arr[mid] <<endl;
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

// int even[100]= {15, 17, 18, 25, 27, 28};
// int evenSize = 6;
// int evenk = 28 ;

// int odd[100] = {15, 17, 18, 25, 27, 28, 34};
// int oddk = 34;
// int oddSize = 7;

// search (even, evenSize, evenk);
// search (odd, oddSize, oddk);
// }












// int search(int arr[], int size, int key)
// {
//     int i = 0;
//     int start = 0;
//     int end = size ;
//     while (true)
//     {
//         int mid = (start + end) / 2;
//         if (key == arr[mid])
//         {
//             cout << "Find the key "<< " " << arr[mid] << endl;
//             return arr[mid];
//         }
//         if (end - start < 2)
//         {
//             break;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid;
//         }
//         else
//         {
//             start = mid;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int even[100] = {15, 17, 18, 25, 27, 28};
//     int evenSize = 6;
//     int evenk = 28;

//     int odd[100] = {15, 17, 18, 25, 27, 28, 34};
//     int oddk = 34;
//     int oddSize = 7;

//     search(even, evenSize, evenk);
//     search(odd, oddSize, oddk);
// }