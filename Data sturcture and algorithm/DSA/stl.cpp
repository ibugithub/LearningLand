#include <iostream>
using namespace std;
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
// Array data structure.............
// int main() 
// {
//     array<int, 4> num = {2, 3, 4, 5};
//     for (int i = 0; i < num.size(); i++) 
//     {
//         cout <<num[i]  <<" "; 
//     }
//     cout <<endl;
//     //will return the element at index position 2
//     cout << num.at(2) <<endl; 

//     //will check is the array empty or not 
//     cout << num.empty() <<endl;

//     //will return the first element from the array
//     cout << num.front() <<endl;

//     //will return the last element from the array
//     cout << num.back() <<endl;
// }

























// // vector data structure....Size vs capacity.........
// int main() 
// {
//     vector<int> num;
//     cout <<"The capacity is =>" <<" " <<num.capacity() <<endl;
//     cout <<"The size is =>" <<" " <<num.size() <<endl;
//     num.push_back (1);


//     cout <<"The capacity is =>" <<" " <<num.capacity() <<endl;
//     cout <<"The size is =>" <<" " <<num.size() <<endl;
//     num.push_back (2);
 
    
//     cout <<"The capacity is =>" <<" " <<num.capacity() <<endl;
//     cout <<"The size is =>" <<" " <<num.size() <<endl;
//     num.push_back (3);


//     cout <<"The capacity is =>" <<" " <<num.capacity() <<endl;
//     cout <<"The size is =>" <<" " <<num.size() <<endl;
//     num.push_back (4);

 
    
//     cout <<"The capacity is =>" <<" " <<num.capacity() <<endl;
//     cout <<"The size is =>" <<" " <<num.size() <<endl;
//     num.push_back (5);
    
    

//     cout <<"The capacity is =>" <<" " <<num.capacity() <<endl;
//     cout <<"The size is =>" <<" " <<num.size() <<endl;
//     num.push_back (6);

// }


























// // vector data structure.............
// int main() 
// { 
//     cout <<endl;

//     vector<int> num;
//     //pushing or adding element to the vector from the end...
//     num.push_back (1);
//     num.push_back (2);
//     num.push_back (3);
    

//    //Accessing the element from the vector...
//     cout <<"Accessing the element from the vector" <<endl;
//     cout <<"Getting the element form the particular index..." <<endl;
//     cout << num.at(2) <<endl;

//     cout <<"getting the first element for the vector...." <<endl;
//     cout << num.front() <<endl;

//     cout <<"getting the last element from the vector...." <<endl;
//     cout << num.back() <<endl;

//     cout << "Checking whether the vector is empty or not" <<endl;
//     cout << num.empty() <<endl <<endl <<endl;


//     // before popping ...
//     cout <<"Before popping back the element " <<endl;
//     for (int i = 0; i < num.size(); i++) 
//     {
//         cout <<num[i] <<" " ;
//     }
//     cout <<endl;

//     cout <<"Before popping back the element " <<endl;
//     // after popping ..... 
//     num.pop_back();
//     for (int i = 0; i < num.size(); i++) 
//     {
//         cout << num[i] <<" ";
//     }
//     cout <<endl <<endl <<endl;


//     //Size and Capacity Before clearing the vector.........
//     cout <<"Size and Capacity Before clearing the vector..." <<endl;
//     cout <<"size is = >" <<" " <<num.size() <<endl;;
//     cout <<"size is = >" <<" " <<num.capacity() <<endl;

    
//     num.clear();

//     cout <<"Size and Capacity After clearing the vector..." <<endl;
//     //Size and Capacity after clearing the vector.........
//     cout <<"size is = >" <<" " <<num.size() <<endl;;
//     cout <<"size is = >" <<" " <<num.capacity() <<endl;
//     cout << endl <<endl;
    



//     //initilizing vector 5 will be the size and the 1 will be the starting point.
//     vector<int> number(5, 1);
    
//     cout <<"Before pushing two new element to the aray ..." <<endl;
//     cout << "size = > " <<" " <<number.size() <<endl;

//     number.push_back(2);
//     number.push_back(3);
//     cout <<"After pushing two new element to the aray ..." <<endl;
//     cout << "size = > " <<" " <<number.size() <<endl <<endl;


//     cout <<"Printing the new number vector ...." <<endl;
//     for (int i = 0; i < number.size(); i++) 
//     {
//         cout <<number[i] <<" ";
//     }
//     cout <<endl <<endl;

//     cout <<"number vector will be copied to the copyNUmber" <<endl;;
//     vector<int>copyNumber(number);
//     for (int i = 0; i < copyNumber.size(); i++) 
//     {
//         cout <<copyNumber[i] <<" ";
//     }
//     cout <<endl;
// }
 




















// // Deque data structure............
// int main() 
// { 
//     cout <<endl;

//     deque<int> num;
//     //pushing or adding element to the vector from the end...
//     num.push_back (1);
//     num.push_back (2);
//     num.push_back (3);
//     //you can push element from the front in deque..
//     num.push_front(5);
    

//    //Accessing the element from the vector...
//     cout <<"Accessing the element from the deque" <<endl;
//     cout <<"Getting the element form the particular index..." <<endl;
//     cout << num.at(2) <<endl;

//     cout <<"getting the first element for the deque...." <<endl;
//     cout << num.front() <<endl;

//     cout <<"getting the last element from the deque...." <<endl;
//     cout << num.back() <<endl;

//     cout << "Checking whether the vector is empty or not" <<endl;
//     cout << num.empty() <<endl <<endl <<endl;


//     // before popping ...
//     cout <<"Before popping back the element " <<endl;
//     for (int i = 0; i < num.size(); i++) 
//     {
//         cout <<num[i] <<" " ;
//     }
//     cout <<endl;

//     cout <<"Before popping back the element " <<endl;
//     // after popping ..... 
//     num.pop_back();
//     cout <<"You can pop from the front also in the deque" <<endl;
//     num.pop_front();
//     for (int i = 0; i < num.size(); i++) 
//     {
//         cout << num[i] <<" ";
//     }
//     cout <<endl <<endl <<endl;


//     //Size Before clearing the deque.........
//     cout <<"Size Before clearing the vector..." <<endl;
//     cout <<"size is = >" <<" " <<num.size() <<endl;
//     num.clear();

//     cout <<"Size After clearing the vector..." <<endl;
//     //Size and Capacity after clearing the vector.........
//     cout <<"size is = >" <<" " <<num.size() <<endl;
//     cout << endl <<endl;
    

//     //erasing element....
//     cout <<"you can erase also in deque" <<endl;
//     cout <<"let's add some more element to the deque" <<endl <<".........." <<endl; 
//     num.push_back(33);
//     num.push_front(50);
//     num.push_back(32);
    
//     cout <<"now befor erasing we have" <<endl;
//     for (int i = 0; i < num.size(); i++) 
//     {
//         cout <<num[i] << " ";
//     }
//     cout <<endl;

//     num.erase(num.begin(), num.begin() +2);
//     cout <<"now after the erasing first 2 element we have" <<endl;
//     for (int i = 0; i < num.size(); i++) 
//     {
//         cout <<num[i] << " ";
//     }
//     cout <<endl;




//     //initilizing vector 5 will be the size and the 1 will be the starting point.
//     vector<int> number(5, 1);
    
//     cout <<"Before pushing two new element to deque ..." <<endl;
//     cout << "size = > " <<" " <<number.size() <<endl;

//     number.push_back(2);
//     number.push_back(3);
//     cout <<"After pushing two new element to the deque ..." <<endl;
//     cout << "size = > " <<" " <<number.size() <<endl <<endl;


//     cout <<"Printing the new number deque ...." <<endl;
//     for (int i = 0; i < number.size(); i++) 
//     {
//         cout <<number[i] <<" ";
//     }
//     cout <<endl <<endl;

//     cout <<"number deque will be copied to the copyNUmber" <<endl;;
//     vector<int>copyNumber(number);
//     for (int i = 0; i < copyNumber.size(); i++) 
//     {
//         cout <<copyNumber[i] <<" ";
//     }
//     cout <<endl;
// }
































// // List data structure...........
// int main() 
// { 
//     cout <<endl;

//     list<int> num;
//     //pushing or adding element to the vector from the end...
//     num.push_back (1);
//     num.push_back (2);
//     num.push_back (3);
//     //you can push element from the front in deque..
//     num.push_front(5);
    

//    //Accessing the element from the list...
//     cout <<"Accessing the element from the list" <<endl;
//     cout <<"Getting the element form the particular index..." <<endl;
//     // cout << num.at(2) <<endl;
//     cout <<"you can't get random or particular element from list" <<endl;

//     cout <<"getting the first element for the list...." <<endl;
//     cout << num.front() <<endl;

//     cout <<"getting the last element from the list...." <<endl;
//     cout << num.back() <<endl;

//     cout << "Checking whether the list is empty or not" <<endl;
//     cout << num.empty() <<endl <<endl <<endl;


//     // before popping ...
//     cout <<"Before popping back the element " <<endl;
//     for (int i : num) 
//     {
//         cout <<i <<" " ;
//     }
//     cout <<endl;

//     cout <<"Before popping back the element " <<endl;
//     // after popping ..... 
//     num.pop_back();
//     cout <<"You can pop from the front also in the list" <<endl;
//     num.pop_front();
//     for (int i : num) 
//     {
//         cout << i <<" ";
//     }
//     cout <<endl <<endl <<endl;


//     //Size Before clearing the deque.........
//     cout <<"Size Before clearing the list..." <<endl;
//     cout <<"size is = >" <<" " <<num.size() <<endl;
//     num.clear();

//     cout <<"Size After clearing the list..." <<endl;
//     //Size and Capacity after clearing the vector.........
//     cout <<"size is = >" <<" " <<num.size() <<endl;
//     cout << endl <<endl;
    

//     //erasing element....
//     cout <<"you can erase also in list" <<endl;
//     cout <<"let's add some more element to the list" <<endl <<".........." <<endl; 
//     num.push_back(33);
//     num.push_front(50);
//     num.push_back(32);
    
//     cout <<"now befor erasing we have" <<endl;
//     for (int i : num) 
//     {
//         cout <<i << " ";
//     }
//     cout <<endl;

//     num.erase(num.begin());
//     cout <<"now after the erasing first 2 element we have" <<endl;
//     for (int i : num) 
//     {
//         cout <<i << " ";
//     }
//     cout <<endl;


//     //initilizing vector 5 will be the size and the 1 will be the elements.
//     list<int> number(5, 1);
    
//     cout <<"Before pushing two new element to deque ..." <<endl;
//     cout << "size = > " <<" " <<number.size() <<endl;

//     number.push_back(2);
//     number.push_back(3);
//     cout <<"After pushing two new element to the deque ..." <<endl;
//     cout << "size = > " <<" " <<number.size() <<endl <<endl;


//     cout <<"Printing the new number deque ...." <<endl;
//     for (int i : number) 
//     {
//         cout <<i <<" ";
//     }
//     cout <<endl <<endl;

//     cout <<"number deque will be copied to the copyNUmber" <<endl;;
//     list<int>copyNumber(number);
//     for (int i : copyNumber) 
//     {
//         cout <<i <<" ";
//     }
//     cout <<endl;
// }  



















// // Stack data structure.............
// //First in last out will happen in stack
// int main() 
// { 
//     cout <<endl;

//     stack<string> name;
//     //pushing or adding element to the stack from the end...
//     name.push ("Md Ibrahim");
//     name.push ("Md Rakib");
//     name.push ("Md Imran");

 
//    //Accessing the element from the stack...
//     cout <<"Accessing the element from the stack" <<endl;    
//     cout <<"you can't get random or particular element from stack" <<endl;

//     cout <<"getting the first element for the list...." <<endl;
//     cout << name.top() <<endl;
//     cout << name.top() <<endl;

//     cout << "Checking whether the list is empty or not" <<endl;
//     cout << name.empty() <<endl <<endl <<endl;

// }














// // queue data structure.............
// //First in First out will happen in queue..
// int main() 
// { 
//     cout <<endl;
//     queue<string> name;
//     //pushing or adding element to the stack from the end...
//     name.push ("Md Ibrahim");
//     name.push ("Md Rakib");
//     name.push ("Md Imran");

 
//    //Accessing the element from the stack...
//     cout <<"Accessing the element from the stack" <<endl;    
//     cout <<"you can't get random or particular element from stack" <<endl;

//     cout <<"getting the first element for the list...." <<endl;
//     cout << name.front() <<endl;
//     cout << name.back() <<endl;

//     cout << "Checking whether the list is empty or not" <<endl;
//     cout << name.empty() <<endl <<endl <<endl;
// }



















// //Priority queue data structure..............
// int main() 
// { 
//     cout <<endl;
//     priority_queue<int> maxi;
//     priority_queue< int, vector<int>, greater<int> > mini;
//     //pushing or adding element ...
//     maxi.push (1);
//     maxi.push (2);
//     maxi.push (3);
//     maxi.push (7);
//     maxi.push (4); 



//     mini.push (1);
//     mini.push (2);
//     mini.push (3);
//     mini.push (7);
//     mini.push (4);

 
//    //Accessing the element from the stack...
//     cout <<"Accessing the element from the priority_queue" <<endl;    
//     cout <<"you can't get random or particular element from priority_queue" <<endl;
//     cout <<"getting the elements from maxi...." <<endl;
//     int size = maxi.size();
//     for (int i = 0; i < size; i++)
//     {
//         cout <<maxi.top() <<" ";
//         maxi.pop();
//     }
//     cout << "Checking whether the list is empty or not" <<endl;
//     cout << maxi.empty() <<endl <<endl <<endl;




//     cout <<"getting the elements from mini...." <<endl;
//     int miniSize = mini.size();
//     for (int i = 0; i < miniSize; i++)
//     {
//         cout <<mini.top() <<" ";
//         mini.pop();
//     }
//     cout << "Checking whether the list is empty or not" <<endl;
//     cout << mini.empty() <<endl <<endl <<endl;
// }














//Set data structure.............
//First in First out will happen in queue..
int main() 
{ 
    cout <<endl;
    set<int> number;
    //pushing or adding element ...
    number.insert(1);
    number.insert(2);
    number.insert(2);
    number.insert(7);
    number.insert(4); 


 
   //Accessing the element from the stack...
    cout <<"Accessing the element from the set" <<endl;    
    cout <<"you can't get random or particular element from set" <<endl;
    cout <<"getting the elements from set...." <<endl;
    int size = number.size();
    for (int i : number)
    {
        cout <<i <<" ";
    }
    cout <<endl;
    cout << "Checking whether the list is empty or not" <<endl;
    cout << number.empty() <<endl <<endl <<endl;


    cout << "Finding first number in the set and using ::terator" <<endl;
    set<int> :: iterator itr = number.begin();
    itr++;
    cout <<*itr <<endl; 


    cout <<"Finding particular number and using ::iterator" <<endl;
    set<int> :: iterator itfind = number.find(4);
    cout <<*itfind <<endl;

    for( auto i = number.begin(); i != itfind; i++) 
    {
        cout << *i <<" ";
    }

}

