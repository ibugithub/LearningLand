#include <iostream>
using namespace std;

// using substracting method....
// int finding_gcd(int a, int b)
// {
//     if (a == 0 || b == 0)
//     {   
//         return 1;
//     }
//     while (a > 0 && b > 0)
//     {
//         if (a >= b)
//         {
//             a = a - b;
//         }
//         if (b >= a)
//         {
//             b = b - a;
//         }
//         if (a < 0 || b < 0)
//         {
//             return 1;
//         }
//     }
//     if (a == 0)
//     {
//         return b;
//     }
//         return a;
// }

// int main()
// {
//     cout <<finding_gcd(10, 50);
// } 





// // using the modular method............
// int finding_gcd(int a, int b)
// {
//     if (a == 0 || b == 0)
//     {   
//         return 1;
//     }
//     while (a > 0 && b > 0)
//     {
//         if (a >= b)
//         {
//             a = a % b;
//         }
//         if (b >= a)
//         {
//             b = b % a;
//         }
//         if (a < 0 || b < 0)
//         {
//             return 1;
//         }
//     }
//     if (a == 0)
//     {
//         return b;
//     }
//         return a;
// }

// int main()
// {
//     cout <<finding_gcd(10, 50);
// } 



// more optimised way of doing it.....
int finding_gcd(int a, int b)
{
    if (a == 0)
    {return b;}
    if (b == 0)
    {return a;}
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        if (b > a)
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    cout <<finding_gcd(100, 507);
}