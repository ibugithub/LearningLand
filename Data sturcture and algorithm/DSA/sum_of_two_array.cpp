#include<iostream> 
using namespace std;
#include<vector> 
#include <cmath>
#include<algorithm>

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int number_creator(vector<int> & nums) 
{
    int count = 0;
    for (int i = nums.size()-1, j = 0; i >= 0; i--, j++)
    {
        count += nums[i] * pow(10, j);
    }
    return count;
}
void swap(vector<int> & temp) 
{
    for(int start = 0, end = temp.size() - 1; start <= end; start++, end--)
    {
        swap(temp[start], temp[end]);
    }
}
int main() 
{
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {6}; 
    vector<int> temp;
    int number1 = number_creator(nums1);
    int number2 = number_creator(nums2); 
    int sum = number1 + number2;
    int i = 0;
    while(sum > 0)
    {
        temp.push_back(sum % 10);
        sum/=10;
        i++;
    }
    swap(temp);
    printArray(temp);
}