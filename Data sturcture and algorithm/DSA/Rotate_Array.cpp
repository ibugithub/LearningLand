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

// int main()
// {
//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
//     int k = 3;
//     for (int i = 1; i <= k; i++)
//     {
//         int temp = nums[nums.size() - 1];
//         for (int i = nums.size() - 1; i > 0; i--)
//         {
//             nums[i] = nums[i - 1];
//         }
//         nums[0] = temp;
//     }

//     printArray(nums);
// } 



















int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    int start = 0;
    int end = nums.size() - 1; 
    while(start != k && end != k)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    cout << "the start is " <<start <<endl;
    cout <<"the end is " <<end <<endl;
    if (start == k)
    { k = end;} 
    while(start <= end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    cout << "the start is after " <<start <<endl;
    cout <<"the end is after" <<end <<endl;

    printArray(nums);
} 