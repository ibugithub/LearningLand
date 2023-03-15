#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>
using namespace std;

// my way of doing it .............

// bool checking(string s1, string s2)
// {
//     int start = 0;
//     int end = s1.size() - 1;
//     while (end < s2.size())
//     {
//         for (int i = start; i <= end; i++)
//         {
//             if ((s1.find(s2[i]) > s1.size()) || (count(s2.begin() + start,  s2.begin() + end + 1, s2[i]) != count(s1.begin(), s1.end() + 1, s2[i])) )
//             {
//                 start++;
//                 end++; 
//                 break;  
//             }
//             if(i == end)
//             {return true;}
//         }
//     }
//     return false;    
// }
// int main()
// {
    // string s1 = "ab";
    // string s2 = "eidaooo";
//     cout <<(checking(s1, s2));
// }




// // more optimised way of doing it...

// bool countChecker(int s3[26], int s4[26]) 
// {
//     for (int i = 0; i < 26; i ++) 
//     {   
//         if(s3[i] != s4[i])
//         {return false;}    
//     }
//     return true;
// }
// bool permutationChecker(string s1, string s2)
// {
//     int s3[26] = {0}; 
//     int s4[26] = {0};
//     int i = 0;
//     for (; i < s1.size(); i++)
//     {
//         s3[s1[i] - 'a']++;
//         if(i < s2.size())
//         {s4[s2[i] - 'a']++;}
//     }
//     if (countChecker(s3, s4))
//     {return true;}
//     while(i < s2.size())
//     {
//         s4[(s2[i - s1.size()]) - 'a']--;
//         s4[s2[i] - 'a']++; 
//         i++;
//         if(countChecker(s3, s4))
//         {return true;}
//     }
//     return false;
// }
// int  main() 
// {
//     string s1 = "ad";
//     string s2 = "eidaooo";
//     int nums[26] = {0};
//     cout <<permutationChecker(s1, s2);
// }

