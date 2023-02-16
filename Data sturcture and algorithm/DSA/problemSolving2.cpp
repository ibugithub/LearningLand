#include <iostream>
using namespace std;
#include <vector>
#include <array>

// // Creating a new reverse vector from an vector.....
// void printArray(vector<int> arr)
// {
//     for (int i = 0 ; i < arr.size(); i++)
//     {
//         cout << arr[i] <<" ";
//     }
// }
// int main()
// {
//     vector<int> arr = {1, 3, 6, 9};
//     vector<int> newarr;
//     for(int i = arr.size() - 1; i >= 0; i --)
//     {
//         cout << arr[i] <<endl;
//         newarr.push_back(arr[i]);

//     }
//     printArray(newarr);
// }

//  // Creating a new reverse new vector from a particular index from a existing vector.............
// void printArray(vector<int> arr)
// {
//     for (int i = 0 ; i < arr.size(); i++)
//     {
//         cout << arr[i] <<" ";
//     }
// }
// int main()
// {
//     vector<int> arr = {1, 3, 6, 9, 2, 22};
//     int m = 3;
//     int j = arr.size();
//     vector<int> newarr;
//     for(int i = 0; i < arr.size(); i ++)
//     {
//         if(i > m)
//         {
//             j-=1;
//             newarr.push_back(arr[j]);
//         }
//         else
//         {
//              newarr.push_back(arr[i]);
//         }
//     }
//     printArray(newarr);
// }

// // reverse a vector after a particular index from a existing vector.............
// void printArray(vector<int> arr)
// {
//     for (int i = 0 ; i < arr.size(); i++)
//     {
//         cout << arr[i] <<" ";
//     }
// }
// int main()
// {
//     vector<int> arr = {1, 3, 6, 9, 2, 22, 35, 77, 8};
//     int m = 3;
//     for(int i = m + 1 , j = arr.size() -1; i <= j; i ++, j--)
//     {
//         swap(arr[i], arr[j]);
//     }
//     printArray(arr);
// }

// // Merging 2 sorted arrays.........
// void printArray(vector<int>&nums1)
// {
//     for(int i = 0; i < nums1.size(); i++)
//     {
//         cout <<nums1[i] <<" " ;
//     }
// }
// int main ()
// {
//     vector<int> nums1 = {2,0};
//     int m = 1;
//     vector <int> nums2 = {1};
//     int n = 1;
//     int i = 1;
//     for (int i = m  ; i < (m + n); i++)
//     {
//         nums1.pop_back();
//     }
//     for (int i = 0; i < n; i++)
//     {
//         nums1.push_back(nums2[i]);
//     }
//     while( i < nums1.size())
//     {
//         int temp = nums1[i];
//         int j = i - 1;
//         while(nums1[j] > temp && j >= 0)
//         {
//             nums1[j+1] = nums1[j];
//             j--;
//         }
//         nums1[j + 1] = temp;
//         i++;
//     }
//     printArray(nums1);
// }

// // Merging 2 sorted arrays...Another way of doing it......
// void printArray(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int m = 5;
//     int n = 4;
//     vector<int> newarr;
//     vector<int> nums1 = {1, 3, 5, 7, 9};
//     int i = 0;
//     vector<int> nums2 = {2, 4, 11, 12};
//     int j = 0;
//     while (i < m && j < n)
//     {
//         if (nums1[i] < nums2[j])
//         {
//             newarr.push_back(nums1[i++]);
//         }
//         else
//         {
//             newarr.push_back(nums2[j++]);
//         }
//     }
//     while (i < m)
//     {
//         newarr.push_back(nums1[i++]);
//     }
//     while(j < n)
//     {
//         newarr.push_back(nums2[j++]);
//     }
//     printArray(newarr);
// }












