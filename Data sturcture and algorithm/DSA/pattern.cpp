#include <iostream>
using namespace std;


int main(){


// int x, y;
// int i = 1;
// cout << "Write the x ";
// cin >> x;
// cout << "Write the y ";
// cin >> y;

// while(i <= y)
// {
//   int j = 1;
//   while(j <= x){
//     cout << j;
//     j+=1;
//   }
//   cout <<endl;
//   i+=1;
// }




// int x, y;
// int i = 1;
// cout << "Write the x ";
// cin >> x;
// cout << "Write the y ";
// cin >> y;
// int c = 1;

// while(i <= y)
// {
//   int j = 1;
//   while(j <= x){

//     cout << c;
//     j+=1;
//     c+=1;
//   }
//   cout <<endl;
//   i+=1;
// }



// patterns ....
// *
// **
// ***
// ****
// int n;
// cin >> n;
// int row = 1;

// while (row <= n){
//   int col = 1;
//   while(col <= row){
//     cout << "*";
//     col +=1; 
//   }
//   row+=1;
//   cout <<endl;
// }




// pattern .....
// 1
// 22
// 333
// 4444
// 55555

// int n;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= row)
//   {
//     cout <<row;
//     col += 1;
//   }
//   row += 1;
//   cout << endl;
// }




// pattern ...
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// int n;
// int count = 1;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= row)
//   {
//     cout <<count <<" ";
//     count +=1;
//     col += 1;
//   }
//   row += 1;
//   cout << endl;
// }




// pattern ......
// 1 
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

// int n;
// int count = 1;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= row)
//   {
//     cout <<count <<" ";
//     count +=1;
//     col += 1;
//   }
//   row += 1;
//   count =  row;
//   cout << endl;
// }


// Different way to do it........
// int n;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= row)
//   {
//     cout <<(row-1)+col <<" ";
//     col += 1;
//   }
//   row += 1;
//   cout << endl;
// }




// pattern ......
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// int n;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= row)
//   {
//     cout <<(row+1)-col <<" ";
//     col += 1;
//   }
//   row += 1;
//   cout << endl;
// }

// pattern .......
// A A A A A 
// B B B B B
// C C C C C
// D D D D D

// int n;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= n)
//   {
//     char value = ('A'+row)-1;
//     cout <<value <<" ";
//     col += 1;
//   }
//   row += 1;
//   cout << endl;
// }





// pattern .....
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E

// int n;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= n)
//   {
//     char value = ('A'+col)-1;
//     cout <<value <<" ";
//     col += 1;
//   }
//   row += 1;
//   cout << endl;
// } 


// pattern ....... 
// A B C D E
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y

// int n;
// cin >> n;
// int  row = 1;
// int count = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= n)
//   {
//     char value = ('A'+count)-1;
//     cout <<value <<" ";
//     col += 1;
//     count+=1;
//   }
//   row += 1;
//   cout << endl;
// } 




// pattern .....
// A B C 
// B C D
// C D E

// int n;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= n)
//   {
//     char value = ('A'+row)+col-2;
//     cout <<value <<" ";
//     col += 1;
//   }
//   row += 1;
//   cout << endl;
// } 




// pattern ....
// A 
// B C
// C D E
// D E F G 

// int n;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= row)
//   {
//     char value = ('A'+row)+col-2;
//     cout <<value <<" ";
//     col += 1;
//   }
//   row += 1;
//   cout << endl;
// } 



// pattern .... 
// A 
// B C
// C D E
// D E F G 


// int n;
// cin >> n;
// int  row = 1;
// int count = 0;
// while(row <= n){
//   int col = 1; 
//   while(col <= row)
//   {
//     char value = ('A'+row)+col -2;
//     cout <<value <<" ";
//     col += 1;
//     count += 1;
//   }
//   row += 1;
//   cout << endl;
// } 



// pattern .....
// D 
// C D
// B C D
// A B C D

// int n;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   while(col <= row)
//   {
//     char value = ('A' + n - row + col -1);
//     cout <<value <<" ";
//     col += 1;
//   }
//   row += 1;
//   cout << endl;
// } 


// Different way to do it ..... 
// int n;
// cin >> n;
// int  row = 1;
// while(row <= n){
//   int col = 1; 
//   char value = ('A' + n - row );
//   while(col <= row)
//   {
//     cout <<value <<" ";
//     value += 1;
//     col += 1;
//   }
//   row += 1;
//   cout << endl;
// } 



// pattern ............
//    *
//   **
//  ***
// ****

// int n;
// cin >> n;
// int row = 1;
// while(row <= n)
// {
//     int col1 =1;
//     while(col1 <= (n-row))
//     {
//         cout << ' '; 
//         col1 +=1;
//     }
//     int col2 =1;
//     while(col2 <= row)
//     {
//         cout << '*';
//         col2 += 1;
//     }
//     row += 1;
//     cout <<endl;
// }



// pattern ........
// ****
// ***
// **
// *

// int n;
// cin >> n;
// int row = 1;
// while(row <= n)
// {
//     int col1 =1;
//     while(col1 <= (n- row +1))
//     {
//         cout << '*'; 
//         col1 +=1;
//     }
//     int col2 =1;
//     while(col2 <= row-1)
//     {
//         cout << ' ';
//         col2 += 1;
//     }
//     row += 1;
//     cout <<endl;
// }





// pattern .......... 
// ****
//  ***
//   **
//    *

// int n;
// cin >> n;
// int row = 1;
// while(row <= n)
// {
//     int col2 =1;
//     while(col2 <= row-1)
//     {
//         cout << ' ';
//         col2 += 1;
//     }
//     int col1 =1;
//     while(col1 <= (n- row +1))
//     {
//         cout << '*'; 
//         col1 +=1;
//     }
//     row += 1;
//     cout <<endl;
// }




// pattern ............ 
// 1111
//  222
//   33
//    4

// int n;
// cin >> n;
// int row = 1;
// while(row <= n)
// {
//     int col2 =1;
//     while(col2 <= row-1)
//     {
//         cout << ' ';
//         col2 += 1;
//     }
//     int col1 =1;
//     while(col1 <= (n- row +1))
//     {
//         cout << row; 
//         col1 +=1;
//     }
//     row += 1;
//     cout <<endl;
// }




// pattern ............. 
//    1
//   22
//  333
// 4444

// int n;
// cin >> n;
// int row = 1;
// while(row <= n)
// {
//     int col2 =1;
//     while(col2 <= n - row)
//     {
//         cout << ' ';
//         col2 += 1;
//     }
//     int col1 =1;
//     while(col1 <= (row))
//     {
//         cout << row; 
//         col1 +=1;
//     }
//     row += 1;
//     cout <<endl;
// }





// pattern ........... 
// 1234
//  234
//   34
//    4

// int n;
// cin >> n;
// int row = 1;
// while(row <= n)
// {
//     int col2 =1;
//     while(col2 <= row - 1)
//     {
//         cout << ' ';
//         col2 += 1;
//     }
//     int col1 =1;
//     while(col1 <= (n-row +1))
//     {
//         cout << row + col1 -1; 
//         col1 +=1;
//     }
//     row += 1;
//     cout <<endl;
// }
 


// pattern ....
//    1
//   23
//  456
// 78910

// int n;
// cin >> n;
// int row = 1;
// int count = 1;
// while(row <= n)
// {
//     int col2 =1;
//     while(col2 <= n - row)
//     {
//         cout << ' ';
//         col2 += 1;
//     }
//     int col1 =1;
//     while(col1 <= (row))
//     {
//         cout << count;
//         count +=1; 
//         col1 +=1;
//     }
//     row += 1;
//     cout <<endl;
// } 


// pattern ...... 
//    1   
//   121
//  12321
// 1234321

// int n;
// cin >> n;
// int row = 1;
// while(row <= n)
// {
//     int col1 =1;
//     while(col1 <= n - row)
//     {
//         cout << ' ';
//         col1 += 1;
//     }
//     int col2 = 1;
//     while(col2 <= (row - 1))
//     {
//         cout << col2;
//         col2 +=1;
//     }
//     int col3 =1;
//     while(col3 <= row)
//     {
//         cout << row - col3 + 1;
//         col3 += 1;
//     }
//     int col4 = 1;
//     while(col4 <= n-row) 
//     {
//         cout << ' ';
//         col4 += 1;
//     }
//     row += 1;
//     cout <<endl;
// } 


// pattern ..... 
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

// int n;
// cin >> n;
// int row = 1;
// while(row <= n)
// {
//     int col1 =1;
//     while(col1 <= n - row +1)
//     {
//         cout << col1;
//         col1 += 1;
//     }
//     int col2 = 1;
//     while(col2 <= (row - 1))
//     {
//         cout << '*';
//         col2 +=1;
//     }
//     int col3 =1;
//     while(col3 <= row -1)
//     {
//         cout << '*';
//         col3 += 1;
//     }
//     int col4 = 1;
//     while(col4 <= n - row + 1) 
//     {
//         cout << n - row + 2 -col4;
//         col4 += 1;
//     }
//     row += 1;
//     cout <<endl;
// }


}


