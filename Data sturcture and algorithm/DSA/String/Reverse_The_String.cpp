#include <iostream>
using namespace std;

void printArray(string sentence)
{
    for (int i = 0; i < sentence.length(); i++)
    {
        cout << sentence[i] << "\n";
    }
}
int main()
{
    string sentence = "     The     sky      is    blue    ";
    string sentence2;
    int end = -1;
    int count = 1;
    for (int i = sentence.length() - 1; i >= 0; i--)
    {
        if (sentence[i] == ' ')
        {
            if (end != -1)
            {
                for (int start = i + 1; start <= end; start++)
                {
                    sentence2.push_back(sentence[start]);
                }
                sentence2.push_back(' ');
                end = -1;
                count = 1;
            }
        }
        else
        {
            if (count)
            {
                end = i;
                count = 0;
            }
            if (i == 0)
            {
                for (int start = i; start <= end; start++)
                {
                    sentence2.push_back(sentence[start]);
                }
            }
        }
    }
    if (sentence2[sentence2.length() - 1] == ' ')
    {
        sentence2.pop_back();
    }
    cout << sentence2;
}