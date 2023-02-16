#include <iostream>
using namespace std;
#include <vector>

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// // Put all of the zeroes to the left........Testing............
// int main()
// {
//     vector<int> nums = {3, 0, 0,3, 3, 3,3,3, 0,5,0,6,0, 0, 0, 1,0, 0, 0,6,2,0,2, 3, 0, 3};
//     int end = nums.size() - 1;
//     cout << "the size is " << end << endl;
//     for (int i = 0; i <= end; i++)
//     {
//         printArray(nums);
//         cout << endl;
//         cout << "the i is " << i << endl;

//         if (nums[i] == 0)
//         {
//             cout << "find the 0 and i is " << i << endl;
//             int count = 0;
//             while (nums[i] == 0)
//             {
//                 count += 1;
//                 i++;
//             }
//             i--;
//             cout << "the count is " << count << endl;
//             cout << "after while the i is " << i << endl;
//             for (int j = i + 1; j <= end; j++)
//             {
//                 cout << "the i is " << i << endl;
//                 cout << "the j is " << j << endl;
//                 if (nums[j] == 0)
//                 {
//                     count++;
//                     continue;
//                 }
//                 else
//                 {
//                     nums[j - count] = nums[j];
//                     for (int k = (j - count) + 1; k <= j; k++)
//                     {
//                         nums[k] = 0;
//                     }
//                 }

//                 printArray(nums);
//                 cout << endl;
//             }
//         }
//     }
//     cout << "last" << endl;
//     printArray(nums);
// }

// Put all of the zeroes to the left....................
// int main()
// {
//     vector<int> nums = {0};
//     int end = nums.size() - 1;
//     for (int i = 0; i <= end; i++)
//     {
//         if (nums[i] == 0)
//         {
//             int count = 0;
//             while (nums[i] == 0)
//             {
//                 count += 1;
//                 i++;
//             }
//             i--;
//             for (int j = i + 1; j <= end; j++)
//             {
//                 if (nums[j] == 0)
//                 {
//                     count++;
//                     continue;
//                 }
//                 else
//                 {
//                     nums[j - count] = nums[j];
//                     for (int k = (j - count) + 1; k <= j; k++)
//                     {
//                         nums[k] = 0;
//                     }
//                 }
//             }
//         }
//     }
//     printArray(nums);
// }










// The best solution for this............
int main() 
{
    vector<int> nums = {3, 0, 3, 0, 0, 4, 0, 4};
    int i = 0; 
    for(int j = 0; j <= nums.size() -1; j++) 
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }
    printArray(nums);
}