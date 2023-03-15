#include<iostream>
#include <stack>
using namespace std;
#include<algorithm>

void printStack(stack<int> s)
{
    while(!s.empty())
    {
        cout <<s.top() <<" ";
        s.pop();
    }
}
void reverseStack(stack<char> c) {
    stack<char> additionalStack;
    while (!c.empty()) {
        additionalStack.push(c.top());
        c.pop();
    }
    c = additionalStack;
}



// Solving that issue with stack data structur.....
// string adjecentDuplicatelRemoving(string s)
// {
//     stack<char> stk;
//     for (char c : s) {
//         if (!stk.empty() && c == stk.top()) {
//             stk.pop();
//         } else {
//             stk.push(c);
//         }
//     }
//     string result;
//     while (!stk.empty()) {
//         result += stk.top();
//         stk.pop();
//     }
//     reverse(result.begin(), result.end());
//     return result;
// }

// int main() 
// {
//     string s ="abbaca";
//     cout << adjecentDuplicatelRemoving(s);
// }



// solving that issue with string ....
string duplicatRemoving(string s)
{
    string s2; 
    for (int i = 0, j = 0; i < s.size(); i++, j++) 
    {
        if(s2.empty() || s[i] != s2[j - 1])
        {
            s2.push_back(s[i]);
        }
        else if(s[i] == s2[j - 1])
        {
            s2.pop_back();
            j-=2;
        }
    }
    return s2;
}
int main() 
{
    string s = "abbaca";
    cout <<duplicatRemoving(s);
}

