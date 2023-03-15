#include <iostream>
using namespace std;
#include <vector>
#include<string>

void printArray(string sentence)
{
    for (int i = 0; i < sentence.size(); i++)
    {
        cout << sentence[i];
    }
}

// int main()
// {
//     string s = "daabcbaabcbc";
//     string part = "abc"; 
//     for (int i = 0; i < s.size(); i++)
//     {
//         string temp;
//         if (s[i] == part[0])
//         {   
//             for (int k = i, l = 0; l < part.size(); k++, l++)
//             {
//                 if( k < s.size())
//                 {
//                     cout <<"the k is " <<k <<"\n";
//                     temp.push_back(s[k]);
//                 }
//             }
//         }
//         if (temp == part)
//         {
//             if (i < s.size() - part.size())
//             {
//                 for (int j = i; j + part.size() < s.size(); j++)
//                 {   
//                     s[j] = s[j + part.size()];
//                 }
//             }
//             for (int i = 0; i < part.size(); i++)
//             {
//                 s.pop_back();
//             }
//             i= -1;
//         }
//     }
//     cout <<"The s size is " <<s.size();
//     cout <<s;
// }






int main() 
{
    string s = "daabcbaabcbc";
    string part = "abc"; 
    while (true)
    {
    size_t pos = s.find(part);
    if(pos != string::npos)
    {
        s.erase(pos, part.size());
    }
    else
    {   
        cout <<"the unmatched pos " <<pos;
        break;
    }
    }
}