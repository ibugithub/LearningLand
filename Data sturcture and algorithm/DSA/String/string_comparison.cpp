#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printArray(vector<char> c, int index)
{
    for (int i = 0; i < index; i++)
    {
        cout << c[i];
        cout << " ";
    }
}

// int countChar(vector<char>&s, int count, int j)
// {
//     string num = to_string(count);
//     for (int i = 0; i < num.size(); i++)
//     {
//         s.push_back((num[i]));
//         j++;
//     }
//     return j;
// }
// void compress(vector<char> &chars)
// {
//     vector<char> s;
//     int count = 1;
//     for (int i = 0, j = 0; i < chars.size(); i++, j++)
//     {
//         if (s.empty() || (chars[i] != s[j - 1]))
//         {
//             if (count > 1)
//             {
//                 j = countChar(s, count , j);
//                 s.push_back(chars[i]);
//                 count = 1;
//             }
//             else
//             {
//                 s.push_back(chars[i]);
//             }
//         }
//         else if (chars[i] == s[j - 1])
//         {
//             count++;
//             j--;
//             if (i + 1 == chars.size())
//             {
//                 countChar(s, count, j);
//             }
//         }
//     }
//     chars = s;
// }

// int main()
// {
//     vector<char> c = {'a', 'a', 'a', 'a', 'a', 'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c'};
//     compress(c);
//     printArray(c);
// }






// more optimised way of doing it..........
int compress(vector<char>& chars) 
{
    int i = 0;
    int index = 0;
    while(i < chars.size())
    {
        int j = i + 1; 
        while(j < chars.size() && chars[i] == chars[j])
        {
            j++;
        }
        chars[index++] = chars[i];
        int count = j - i;
        string scount = to_string(count);
        for (char c : scount)
        {
            chars[index++] = c;
        }
        i = j;
    }
    return index;
}

int main()
{
    vector<char> c = {'a', 'a', 'a', 'a', 'a', 'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c'};
    printArray(c, compress(c));
}