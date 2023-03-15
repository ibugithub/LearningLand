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



// int rotate(vector<int> & nums, int start, int end) 
// {
//     while(start <= end) 
//     {
//         swap(nums[start], nums[end]);
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     vector<int> nums  = {11, 12, 13, 14, 15};
//     int start = 0;
//     int end =  nums.size() - 1; 
//     int k = 1;
//     rotate(nums, start, end);
//     rotate(nums, start, k - 1);      
//     rotate(nums, k, end);
//     printArray(nums);
// } 





int main() 
{
    vector<int> nums = {11, 12, 13, 14, 15, 16, 18, 19, 20, 33};
    vector<int> temp(nums.size());
    int k = 9;
    for (int i = 0; i < nums.size(); i++)
    { 
        int index = (i + k) % (nums.size());
        temp[index] = nums[i];
    }
    nums = temp;
    printArray(nums);
}