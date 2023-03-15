
#include <iostream>
using namespace std;

// int main()
// {
        // int arr[10] = {50, 80, 90, 100};
//         arr[0] = 50;
//         int *p = arr;
//         cout << "The value of arr is " <<arr <<"\n";
//         cout << "The value of &arr is " <<&arr <<"\n";
//         cout << "The value of &arr[0] is " <<&arr[0] <<"\n";
//         cout << "The value of arr + 1 is " <<arr + 1 <<"\n";
//         cout << "The value of *(arr + 1) is " <<*(arr + 1) <<"\n";
//         cout << "The value of i[arr] is " <<1[arr] <<"\n";
//         cout << "The value of *p is " <<*p <<"\n";
//         cout << "The value of p is " <<p <<"\n";
//         cout << "The value of &*p is " <<&*p <<"\n";
//         cout << "The value of &p is " <<&p <<"\n";

//         cout << "The size of arr is " <<sizeof(arr) <<"\n";
//         cout << "The size of arr is " <<sizeof(arr[0]) <<"\n";
//         cout << "The size of arr is " <<sizeof(arr[0]) <<"\n";
//         cout << "The size of *p is " <<sizeof(*p) <<"\n";
//         cout << "The size of p is " <<sizeof(p) <<"\n";
//         cout << "The size of &*p is " <<sizeof(&*p) <<"\n";
// }







// // pointer in integer array
// int main() 
// {
//         int arr[4] = {50, 80, 90, 100};
//         for(int i = 0; i <4; i++) 
//         {
//                 cout <<"The address of arr"<<"["<<i<<"]" <<" is "<<&arr[i] <<"\n"; 
//                 cout <<"The value of arr"<<"["<<i<<"]" <<" is "<<arr[i] <<"\n \n";
//         } 
        
//         int *ptr = &arr[0];
//         ptr = ptr + 1; 
//         cout <<"the value of ptr is " <<ptr <<"\n";
//         cout <<"the value of *ptr is " <<*ptr <<"\n";
//         cout <<"the value of &ptr is " <<&ptr <<"\n";
// }



// pointer in character array...............
int main() 
{
        char arr[5] = {'i', 'b', 'r', 'a', 'h'};
        char name[8] = "ibrahim"; 

        cout <<"the arr is " <<arr <<"\n"; 
        cout <<"the name is " <<name <<"\n";
        char *p = &arr[0];
        cout <<"the *p is " <<*p <<"\n";
        cout <<"the p is " <<p <<"\n";
        cout <<"the &p is " <<*p <<"\n";
}






















// void increaseFunc(int arr[])
// {
//         arr[0] = 60;
// }

// int main()
// {
//         int arr[10] = {50, 80, 90, 100};
//         cout << "before passing the arr to the increaseFunc \n";
//         cout << "The value of arr[0] is " << arr[0] <<"\n";

//         increaseFunc(arr);

//         cout << "after passing the arr to the increaseFunc \n";
//         cout << "The value of arr[0] is " << arr[0] <<"\n";
// }