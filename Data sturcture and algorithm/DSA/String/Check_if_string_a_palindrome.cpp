#include <iostream>
using namespace std;

bool is_alphabet_number(char i)
{
    if (((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) || (i >= '1' && i <= '9'))
    {
        return true;
    }
    return false;
}
bool checking(string s)
{
    for (int start = 0, end = s.size() - 1; start <= end;)
    {

        if (is_alphabet_number(s[start]) && is_alphabet_number(s[end]))
        {
            if (tolower(s[start]) != tolower(s[end]))
            {
                return false;
                break;
            }
            start++;
            end--;
        }
        else
        {
            if (!is_alphabet_number(s[start]))
            {
                start++;
            }
            else if (!is_alphabet_number(s[end]))
            {
                end--;
            }
        }
    }
    return true;
}

int main()
{
    string s = "0P";
    cout << checking(s);
} 
