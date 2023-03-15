#include<iostream> 
using namespace std;

int getChrLen(char name[]) 
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) 
    {
        count++;
    }
    return count;
}
void printArray(char name[])
{
    for (int i = 0; i < getChrLen(name) ; i ++)
    {
        cout <<name[i] <<" ";
    }
}
void reverseChar(char name[])
{
    int start = 0;
    int end = getChrLen(name) - 1;
    for(;start <= end; start++, end--)
    {
        swap(name[start], name[end]);
    }
}

int main() 
{
    char name[10];
    cout << "write your name \n";
    cin >> name; 
    cout << "your name is " <<name <<"\n";  
    reverseChar(name);
    printArray(name);
}
             