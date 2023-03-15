#include <iostream>
using namespace std; 

bool is_prime(int n)
{
    if(n <= 1)
    {
        return false;
    }

    for(int i = 2; i <= 9; i ++)
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    return true;
}


int main() 
{   
    int n = 121;
    if(is_prime(n))
    {
        cout <<"This is a prime number ";
    }
    else
    {
        cout <<"This is not a prime number ";
    }
}