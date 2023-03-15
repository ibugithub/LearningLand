#include <iostream>
#include<array>
using namespace std;

// // tried to draw a box to represent the 2d array..........
// void drawingBox(int row, int col, char elements[])
// { 
//     for(int i = 0; i < col; i++) 
//     {
//         cout <<" " <<"_ _";
//     } 
//     cout <<"\n";
//     for (int i = 0; i < row; i++) 
//     {
//         for(int j = 0; j < col; j ++) 
//         {
//                 cout <<"|" <<"_" <<elements[col*i+j] <<"_";
//         }
//         cout <<"|" <<"\n";
//     }
// }
// int main() 
// {
//     int row = 4;
//     int col = 5;
//     char words[row * col] = {'i', 'b', 'r', 'a', 'h', 'i', 'm', 'h', 'o', 's', 's', 'a','i', 'n'};
//     drawingBox(row, col, words);
// }







// // Giving input and getting output from an 2d array...........
// int main() 
// {
//     int numbers[3][4] ; 

//     // row Wise arrangement.....
//     // for(int row = 0; row < 3; row++) 
//     // {
//     //     for(int col = 0; col <4; col++) 
//     //     {
//     //         cin >> numbers[row][col];
//     //         cout << "next \n";
//     //     }
        
//     // }

//     // giving input to the array......... 
//     // colum wise arrangement
//     for (int col = 0; col < 4; col ++) 
//     {
//         for(int row = 0; row < 3; row ++) 
//         {
//             cin >> numbers[row][col];
//             cout << "next \n";
//         }
//     }


//     // printing the 2d array..........
//     for(int row = 0; row < 3; row++) 
//     {
//         for(int col = 0; col <4; col++) 
//         {
//             cout <<numbers[row][col] <<" ";
//         }
//         cout << "\n";
//     }
// }









// int main () 
// {
//     int numbers[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};


//     cout <<"\nrowwise outputting ....\n";
//     // outputting the 2d array row wise....
//     for (int row = 0; row < 3; row++) 
//     {
//         for (int col = 0; col < 4; col++) 
//         {
//             cout <<numbers[row][col] <<" ";
//         }
//         cout <<"\n";
//     }

//     cout <<"\ncolumwise outputting ....\n";
//     // outputting the 2d array colum wise....
//     for (int col = 0; col < 4; col++) 
//     {
//         for (int row = 0; row < 3; row++) 
//         {
//             cout <<numbers[row][col] <<" ";
//         }
//         cout <<"\n";
//     }
// }


// // // Searching a particular element..........
// bool is_exist(int numbers[][4], int rsize, int num) 
// {
//     for (int row = 0; row < rsize; row++) 
//     {
//         for(int col = 0; col < 4; col++)
//         {
//             if( num == numbers[row][col])
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }


// int main() 
// {
//     int numbers[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     int rsize = 3;
//     int num = 113;
//     cout << is_exist(numbers, rsize, num);
// }





// // printing rowwise sum...................  
// void outingSum(int numbers[][4], int rowsize)
// {
//     for(int row = 0; row < rowsize; row++)
//     {   
//         int sum = 0;
//         for (int col = 0; col < 4; col++) 
//         {
//             sum += numbers[row][col];
//         }
//         cout << sum <<" ";
//     }
// }

// int main () 
// {
//     int numbers[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     outingSum(numbers, 3);
// } 











// // printing colwise sum.............
// void outingSum(int numbers[][4], int rowsize)
// { 
//     for(int col = 0; col < 4; col++)
//     {   
//         int sum = 0;
//         for (int row = 0; row < rowsize; row++) 
//         {
//             sum += numbers[row][col];
//         }
//         cout << sum <<" ";
//     }
// }

// int main () 
// {
//     int numbers[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     outingSum(numbers, 3);
// }














// // // printing rowwise sum.............
// int outingSum(int numbers[][4], int rowsize)
// {   int maxSum = INT_MIN;
//     int rowIndex;
//     for(int row = 0; row < rowsize; row++)
//     {   
//         int sum = 0;
//         for (int col = 0; col < 4; col++) 
//         {
//             sum += numbers[row][col];
//         }
//         cout << sum <<" ";
//         if(sum > maxSum)
//         {maxSum = sum; rowIndex = row;}
//     }
//     cout <<"\nthe largest row is " <<rowIndex;
//     cout << "\n";
//     return maxSum;
// }

// int main () 
// {
//     int numbers[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     cout <<outingSum(numbers, 3);
// }















// // finding maximum col sum..........
// int outingSum(int numbers[][4], int rowsize)
// {   int maxSum = INT_MIN;
//     int colIndex;
//     for(int col = 0; col < 4; col++)
//     {   
//         int sum = 0;
//         for (int row = 0; row < rowsize; row++) 
//         {
//             sum += numbers[row][col];
//         }
//         cout << sum <<" ";
//         if(sum > maxSum)
//         {maxSum = sum; colIndex = col;}
//     }
//     cout <<"the largest colum is " <<colIndex;
//     cout << "\n";
//     return maxSum;
// }

// int main () 
// {
//     int numbers[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     cout <<outingSum(numbers, 3);
// }