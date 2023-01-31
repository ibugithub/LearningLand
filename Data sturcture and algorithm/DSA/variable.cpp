#include<iostream> 
using namespace std;
int main ()
{
   int n;
   cin >> n;
   int sum = 0;
   int product = 1;
   for (int i = 1; n != 0; i ++)
   {
    int val = n % 10;
    int newn = n / 10;
    product *= val;
    sum += val;
    n = newn;
   }
   cout << product - sum;
}