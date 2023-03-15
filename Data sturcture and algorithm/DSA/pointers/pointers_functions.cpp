
#include <iostream>
using namespace std;



void myfunc(int *p )
{
        cout <<"the ptr is " <<p <<"\n";
}

void update(int *ptr )
{
        // *ptr = 60;
        ptr = ptr + 1;
}

// passing pointers in function as a parameter...............
int main() 
{
        int value = 55;
        int *ptr = &value;
        myfunc(ptr);
        cout <<"before " <<ptr <<"\n"; 
        update(ptr);
        cout <<"after " <<ptr <<"\n";   
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