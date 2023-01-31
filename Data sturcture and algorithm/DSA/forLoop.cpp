#include <iostream>
using namespace std;

int main()
{

    // intro to For loop .......

    // for (int a = 1, b = 5, total = 20; a < total && b <= total; a++, b += 2)
    // {
    //     cout << a << endl;
    // }



  // Another way of doing it .....
    // int total = 20;
    // int a = 1;
    // int b = 5;

    // for (;;)
    // {
    //     if (a < total && b < total)
    //     {
    //         cout << a << endl;
    //     }
    //     else
    //     {
    //         break;
    //     }

    //     a++;
    //     b += 2;
    // }

    // Finding sum of n numbers....
    // int n;
    // cin >> n;
    // int sum  = 0;
    // for(int i = 1; i <= n; i++) 
    // {
    //     sum += i;
    // }
    // cout << sum;


    // Febonache series .........  
    // int a = 0;
    // int b = 1;
    // cout << a <<endl <<b <<endl;
    // for(int i = 1 ; i <= 8; i ++) 
    // {
    //     int ser = a + b;
    //     cout << ser <<endl;
    //     a = b;
    //     b = ser;
    // }
 
    
    // Is it a Prime Number.......
    // int n;
    // cin >> n;
    // int i =2;
    // for(; i < n ; i ++) 
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not a Prime Number ";
    //         break;
    //     }
    // }
    // if (i == n)
    // {
    //     cout << "Prime Number ";
    // }


    for(int i = 0; i < 5; i ++)
    {
        for(int j = i; j <= 5; j++ )
        {
            if(i + j == 10){
                break;
            }
            cout << i  <<" " << endl;
        }
    }



}
