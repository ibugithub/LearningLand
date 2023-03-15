#include <iostream>
using namespace std;

// int main() 
// {
//     int num = 550;
//     int *numPtr = &num;
//     cout <<"the &num is " <<&num <<endl;
//     cout <<"the numptr is " <<numPtr <<endl; 
//     cout <<"the *numPtr is " <<*numPtr  <<endl;
//     cout <<"the &numPtr is " <<&numPtr  <<endl;

//     numPtr = numPtr + 1;
//     cout <<"the numPtr is now " <<numPtr <<endl;
//     cout <<"the *numPtr is now " <<*numPtr <<endl; 


//     * numPtr = 1343;
//     cout <<"the numPtr is now " <<numPtr <<endl;
//     cout <<"the *numPtr is now " <<*numPtr <<endl; 

// }   

 
// // Char pointer .........
// int main() 
// {
//     char word = 'I';
//     cout <<"the address of word is " <<&word <<endl;

//     char *wordPtr;
//     wordPtr = &word;
//     cout <<"the value of wordptr is " << wordPtr <<endl;
//     cout <<"adding 1 to wordptr "<<endl;
//     wordPtr = wordPtr + 1;
//     cout <<"now the wordptr is " <<wordPtr <<endl;
//     cout <<"Now the value of wordPtr is "<<*wordPtr; 
// } 





// // Type casting int to Char pointer .........
// int main() 
// {
//     int num = 1235;
//     cout <<"the address of word is " <<&num <<endl;
//     int *p;
//     p = &num;
    
//     void *p2 = p;
//     cout <<"the address of p2 is " <<p2 <<endl;
//     cout <<"the address of p2 + 1 is " <<p2 + 1 <<endl;
//     cout <<"the value of *p2 is " <<*(int*)p2 <<endl;
//     cout <<"the value of *p2 is " <<&*(int*)p2 <<endl;
// }





// // Multi level derefrencing ................ 
int main() 
{
    int num = 8380;
    int *ptr;
    ptr = &num;
    cout <<"the value of ptr is " <<ptr <<endl; 
    cout <<"the value fo *ptr is " <<*ptr <<endl;

    int **ptr2;
    ptr2 = &ptr; 
    cout <<"the value of ptr2 is " <<ptr2 <<endl; 
    cout <<"the value of *ptr2 is " <<*ptr2 <<endl;
}