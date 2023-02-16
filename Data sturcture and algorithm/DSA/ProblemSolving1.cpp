#include<iostream> 
#include<math.h>
using namespace std;
int main() 
{

    // Binary To Decimal conversion.......
    // int n;
    // cin >> n;
    // int prevAnswer = 0;
    // int i = 0; 
    // while(n != 0)
    // {
    //     prevAnswer = ((pow(10, i) * (n & 1)) + prevAnswer);
    //     i++;
    //     n = n>>1;
    // }
    // cout << prevAnswer;



    // Decimal to Binary ......
    // int n;
    // cin >>n;
    // int sum = 0;
    // int i = 0;
    // while(n != 0) 
    // {
    //     if ((n % 10) == 1)
    //     {
    //         sum += pow(2, i);
    //     }
    //     i++;
    //     n/=10;
    // }
    // cout << sum;


    // Complement of integer number.....
    // int n;
    // cin >> n;
    // int i = 0;
    // int sum = 0;

    // while(n != 0)
    // {
    //     if ( (!(n & 1)) == 1)
    //     {
    //         sum += pow(2, i);
    //     }
    //     i++ ;
    //     n>>=1;
    // }

    // if(n == 0)
    // {
    //     return 1;
    // }

     
    // Another Way of doing it.............
    // int n;
    // cin >> n;
    // int m = n;
    // int mask = 0; 
    // while (m != 0)
    // {
    //     mask = (mask << 1) | 1;
    //     m>>=1;
    // } 
    // int ans = (~n) & mask;
    // cout <<ans; 



    // Is it power of 2............
    // int n;
    // cin >> n;
    // bool is = 1;
    // if (n < 1){
    //     is = 0;
    // }
    // while(n > 1)
    // {
    //     if (n % 2 == 0){
    //         n/=2;
    //     }
    //     else{   
    //         is = 0;
    //         break;
    //     }
    // }
    // if (is == 1){
    //     cout << "true";
    // }
    // else if (is == 0)
    // {
    //     cout << "false";
    // }
    
// Another way of d o i ng it .........

int main () {
    int n = 16;
    int sum = 0;
    while(n != 0)
    {
        if (n&1 == 1)
        {
            sum += 1;
        }
        n>>=1;
    }
    if (sum == 1)
    {
        cout << "power of 2";
    }
    else{
        cout << "not power of 2";
    }
    cout << sum;
}


}