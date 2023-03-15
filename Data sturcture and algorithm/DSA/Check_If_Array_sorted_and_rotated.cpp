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

// bool checking(vector<int> & nums)
// {
//     vector<int> temp(nums.size());
//     int k = -1;
//     for (int i = 0; i < nums.size()-1; i++) 
//     {
//         if (nums[i] > nums[i + 1])
//         {
//             k = i;
//             break;
//         }
//     }
//     if (k == -1)
//     {   
//         return true;
//     }
//     k = (nums.size() - 1) - k;
//     for (int i = 0; i < nums.size(); i++) 
//     {
//         temp[(i + k) % nums.size()] = nums[i];
//     } 
//     for(int i = 0; i < temp.size() - 1; i++) 
//     {
//         if (temp[i] > temp[i + 1])
//         { 
//             return false;
//         }
//     }
//     return true;
// }

// int main() 
// {
//     vector<int> nums = {2, 1, 3, 4};
//     cout << checking(nums);
// } 



bool checking(vector<int> & nums)
{
    int count = 0;
    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            count++;
        }
    }
    if(nums[nums.size() - 1] > nums[0])
    {
        count++;
    }
    return count<=1;
}


int main() 
{
    vector<int> nums = {2, 1, 3, 4};
    cout << checking(nums);
}