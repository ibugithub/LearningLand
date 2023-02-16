#include<iostream>
using namespace std;


// Function Introduction ............. 
// int power() 
// {
//     int base, power;
//     cout << " Write the Base number " <<endl;
//     cin >> base;
//     cout << " Write the power number " <<endl;
//     cin >> power; 
//     int sum = 1;
//     for (int i = 1; i <= power; i++) 
//     {
//         sum *=base;
//     }
//     return sum;
// }

// int main() 
// {
//     int val = power();
//     cout << val;
// } 




// Finding is a number is Even or odd...........
// bool isEvenFunc() 
// {
//     int n;
//     cout << "Write the numbe you want to check " << endl;
//     cin >> n;
//     if (n & 1)
//     {
//         return  0;
//     } 
//     return 1;
// }

// int main() 
// {
//     bool isEven = isEvenFunc();
//     if(isEven)
//     {
//         cout<< "This is a Even number ";
//     }
//     else
//     {
//         cout << "This is a odd number";
//     }
// }





// Outputing the ncr value .............
// int factFunc(int a)
// {
//     int factorial = 1;
//     for(int i = 1; i <=a; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }

// int nCr() 
// {
//    int n, r;
//    cout << "Write the value of n " <<endl;
//    cin >>n;
//    cout << "Write the value of r " <<endl;
//    cin >>r;
//    int value = factFunc(n) /(factFunc(r) * (factFunc(n-r)));
//    return value;
// }

// int main() 
// {
//    int ncr = nCr();
//    cout << ncr;
// }




// Counting numbers .....
// void numberCounting()
// {
//     int n;
//     cout << "Write the number you want to count to " <<endl;;
//     cin >> n; 
//     for (int i = 1; i <=n; i++) 
//     {
//         cout << i <<" ";
//     }
//     return ;
// }

// int main () 
// {
//     numberCounting();
// } 











// Checking is it a prime number...............
// bool isPrime()
// {   
//     int n;
//     cout << "Type the number you want to check " <<endl;
//     cin >> n;
//     for (int i =2 ; i <n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main ()
// {
//     bool result = isPrime();
//     if (result)
//     {
//         cout<< "This is a prime number ";
//     }
//     else
//     {
//         cout << "This is not a prime number ";
//     }
// }




int main () 
{
    int value = 2 & 3;
    cout << value;
}