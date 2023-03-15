#include <iostream> 
using namespace std;
#include <vector>
char max(string s) 
{
    int max = -1;
    int maxi = 0;
    vector<int> alphabet(25, 0);
    for(int i = 0; i < s.size(); i++) 
    {
        alphabet[s[i] - 'a']++;
    }
    for(int i = 0; i <= alphabet.size(); i++)
    {
        if(alphabet[i] > max)
        {
            max = alphabet[i];
            maxi = i;
        }
    }
    char alpha ='a' + maxi;
    return alpha;
}

int main() 
{   string s;
    getline(cin, s, ',');
    cout << s;
    cout <<(max(s));
}