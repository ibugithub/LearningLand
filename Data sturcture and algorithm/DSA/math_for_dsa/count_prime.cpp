#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    if (n < 2)
    {
        return 0;
    }
    vector<bool> nums(n+1, true);
    nums[0] = 0;
    nums[1] = 0;
    int count = 0;
    for(int i = 2; i < n; i++) 
    {
        if(nums[i])
        {
            count ++;
            for(int j = i * 2; j < n; j+=i) 
            {   
                nums[j] = 0;
            }
        }
    }
    return count;
}
int main()
{
    int n = 130;
    cout << countPrimes(n);
}