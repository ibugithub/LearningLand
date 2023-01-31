#include<iostream>
#include<math.h>
using namespace std;
int main() 
{


    // decimal to Binary ..... Unoptimised solution by me
    // int n;
    // cin >> n;
    // int i = 1;
    // int j = 1;
    // while(true) 
    // {
    //     i *= 2 ;
    //     j += i ;
    //     if(j >= n){
    //         break;
    //     }
    // }
    // cout <<i << " " <<j <<endl;
    // while(i >= 1) 
    // {
    //     if(i <= n)
    //     {
    //         n -=i; 
    //         i/=2;
    //         cout << 1;
    //     }
    //     else
    //     {
    //         cout << 0;
    //         i/=2;
    //     }
    // }



    // Standrad solution...... 
    // int n;
    // cin >> n;
    // int i = 0;
    // int answer = 0;
    // while(n!=0)
    // {
    //     answer = (pow(10, i) * (n & 1)) + answer;
    //     i ++;
    //     n = n >> 1;

    // } 
    // cout << answer;




    // Binary to Decimal .....
    // int n;
    // cin >> n;
    // int i = 0;
    // int sum = 0;
    // while(n != 0)
    // {
    //     int bit = n % 10; 
    //     if (bit == 1) 
    //     {
    //         sum += pow(2, i);
    //     } 
    //     i ++;
    //     n = n / 10;
    // }
    // cout << sum;















}