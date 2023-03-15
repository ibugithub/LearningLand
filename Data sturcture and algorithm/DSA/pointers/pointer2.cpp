
#include <iostream>
using namespace std;

int main()
{
    // // Examples of call by value...................
    cout << "Examples of call by value .... \n";
    int a = 50;
    int b = a;
    cout << "before modifing the value of a.... \n";
    cout << "the value of a is " << a << "\n";
    cout << "the value of b is " << b << "\n";

    a++;

    cout << "After modifing the value of a .... \n";
    cout << "the value of a is " << a << "\n";
    cout << "the value of b is " << b << "\n";

    // // Examples of call by reference...................
    cout << "Examples of call by raference .... \n";
    int c = 20;
    int *d = &c;
    cout << "before modifing the value of c "
         << " \n";
    cout << "the value of c is " << c << "\n";
    cout << "the value of *d is " << *d << "\n";

    c++;

    cout << "After modifing the value of c "<< " \n";
    cout << "the value of c is " << c << "\n";
    cout << "the value of *d is " << *d << "\n";



// // Coping a pointer into another pointer ....
    cout << "Coping a pointer into another pointer .... \n";
    int *e = d;
    *e+=3;
    cout << "After modifing the value of *e "<< " \n";
    cout << "the value of c is " << c << "\n";
    cout << "the value of *d is " << *d << "\n";
    cout <<"the value of *e is" <<*e <<"\n";


// // modifing a pointer instead of pointer values ....
    cout << "Coping a pointer into another pointer .... \n";
    cout << "Before modifing the pointer value e "<< " \n";
    cout << "the value of c is " << c << "\n";
    cout << "the value of *d is " << *d << "\n";
    cout <<"the value of e is " <<e <<"\n";
    cout <<"the value of *e is" <<*e <<"\n";

    // here e = e + 3 this won't give the memory address of ( e + 3 ) instead (e + 4 + 3) if it is a integer. coz integer is a data type of 4 byte = 4 * 8 = 32 bit. so for double data type e will be e = e + 8 + 3;

    e+=3;

    cout << "After modifing the pointer value e "<< " \n";
    cout << "the value of c is " << c << "\n";
    cout << "the value of *d is " << *d << "\n";
    cout <<"the value of e is " <<e <<"\n";
    cout <<"the value of *e is " <<*e <<"\n";

    
}