#include <iostream>
using namespace std;

void printArray(string sentence)
{
    for (int i = 0; i < sentence.size(); i++)
    {
        cout << sentence[i];
    }
}

// int main() 
// {
//     string s = "I love coding";
//     string s2;
//     for (int i = 0; i < s.size(); i++) 
//     {
//         if (s[i] == ' ')  
//         {
//             s2.append("@40");
//         }
//         else
//         {
//             s2.push_back(s[i]);
//         }
//     }
//     printArray(s2);
// }


// tried to do it more dynamic way.....
// int main() 
// {
//     string s = "  I  love coding  ";
//     int start;
//     int end;
//     int on = 1;
//     string repWord = "@40";
//     for (int i = 0; i < s.size(); i++) 
//     {
//         if (s[i] == ' ')  
//         {   
//             if (on)
//             {
//                 start = i;
//                 on = 0;
//             }
//         }
//         else
//         {
//             if(!on)
//             {
//                 end = i;
//                 on = 1;
//                 int space = end - start; 
//                 space = repWord.length() - space;
//                 for(int i = 0; i < space; i++)
//                 {
//                     s.push_back(' ');
//                 }
//                 for(int i = s.size()-1 - space; i >= end; i--)
//                 {
//                     s[i+space] = s[i];
//                 }
//                 for(int i = start, j = 0; i < end + space; i++, j++) 
//                 {
//                     s[i]=repWord[j];
//                 }
//             }
//         }
//     }
//     printArray(s);
// }