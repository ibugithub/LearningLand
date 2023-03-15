#include <iostream>
using namespace std;
#include <vector>

void printArray(vector<char>& sentence)
{
    for (int i = 0; i < sentence.size(); i++)
    {
        cout << sentence[i];
    }
}
int main() 
{
    vector<char> s = {'T', 'h', 'e', ' ','s', 'k','y',' ','i', 's',' ', 'b','l','u','e'};
    int start = 0;
    int end;
    int temp  = 1;
    for(int i = 0; i < s.size(); i++)     
    {
        if (s[i] == ' ') 
        {
            if (!temp)
            {
                end = i -1;
                temp = 1;
                swap(s[start], s[end]);
            }
        }
        else
        {
            if (temp)
            {
                start = i;
                temp = 0;
            }
            if(i == s.size()-1)
            {
                end = i;
                swap(s[start], s[end]);
            }
        }
    }
    // cout <<"start";
    printArray(s);
    // cout <<"end";
}