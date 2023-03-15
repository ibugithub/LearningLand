#include <iostream>
using namespace std;



void increaseFunc(int a ) 
{
    a++;
    a++;
    cout <<"the a is inside the increasefunc is " <<a <<"\n";
}

int main() 
{
    // // // Storing address to variable............
    // int num1 = 5;
    // int num2 = 7;
    // char char1 = 'I';
    // char char2 = 'B';
    // string word1 = "ibrahim hossain";
    // string word2 = "hello world how are you";
    // cout <<"the address of num1 is " <<&num1 <<"\n";
    // cout <<"the address of num2 is " <<&num2 <<"\n";
    // cout <<"the address of char1 is " <<&char1 <<"\n";
    // cout <<"the address of char2 is " <<&char2 <<"\n"; 
    // cout <<"the address of word1 is " <<&word1 <<"\n"; 
    // cout <<"the address of word2 is " <<&word2 <<"\n";
        


// // Example of call by value....................
// int a = 4;
// cout <<"the a is before passing it to the function " <<a <<"\n";
// increaseFunc(a);
// cout <<"the a is after passing it to the function " <<a <<"\n";


// // creating pointer........... 
int num = 55;
// call by refrence............
int *p = &num;
cout << "the value of num is " <<num <<"\n";
cout <<"the address of num is " <<&num <<"\n";

// // *p will print the value of num....
cout <<"the value of *p is " <<*p <<"\n";

// // p will print the address of num....
cout <<"the value of p is " <<p <<"\n";


// after modifing the num's value..... 
num++; num++; 
cout << "after modifing the num's value.....\n" ;
cout << "the value of num is " <<num <<"\n";
cout << "the value of *p is " <<*p <<"\n";


// Size of pointer.............
double num2 = 35;
double *p2 = &num2;

cout << "the size of num is " <<sizeof(num) <<"\n";
cout << "the size of p is " <<sizeof(p) <<"\n";
cout << "the size of num2 is " <<sizeof(num2) <<"\n";
cout << "the size of p2 is " <<sizeof(p2) <<"\n";

}