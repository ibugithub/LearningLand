#include<iostream> 
using namespace std;

// Intro to Array ..........
// void printArray(char Arr[], int size) 
// {
//     for(int i = 0; i <=size; i++) 
//     {
//         cout <<Arr[i] << " ";
//     };
// }
// int main() 
// {   
//     int size = 10;
//     int number[15] = {1, 5, 6} ;
//     // printArray(number, size); 

//     // int size = sizeof(number)/sizeof(int);
//     // cout << "The size is " <<size; 
//     char Latter[10] = {'A', 'B', 'C', 'D'};
//     printArray(Latter, size);
// }




// Finding min and max .........................
// void minMax(int Arr[], int size){
//     int max = Arr[0];
//     int min = Arr[0];
//     for(int i = 0; i < size; i++) 
//     {
//         if (Arr[i] > max) 
//         {
//             max = Arr[i];
//         } 
//         if (Arr[i] < min )
//         {
//             min = Arr[i];
//         }
//     }
//     cout << "The max Value is " <<max <<endl;
//     cout << "The min value is " <<min <<endl;
// }
// int main() 
// {
//     int size;
//     cout << "HOw many element you want to pass " << endl;  
//     cin >> size;
//     int number[30];
//     for (int i = 0; i < size; i++) 
//     {
//         cout << "Type the element " <<endl;
//         cin >> number[i];
//     }
//     minMax(number, size);
// }








// Reversing a Array...........
// void reverse( int arr[], int size)
// {
//     int start = 0;
//     int end = size -1;
//     while( start <= end){
//         swap(arr[start], arr[end]);
//         start ++ ;
//         end --;
//     }   
// }
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++) 
//     {
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
// }
// int main() 
// {
//     int size = 5;
//     int number[100] = {1, 2, 3, 4, 5};
//     printArray(number, size);
//     reverse(number, size);
//     printArray(number, size);
// } 





//Alternate swaping With swap funciton............
// void reverse(int number[], int size)
// {   
//     for(int i = 0; i < 6; i+=2) 
//     {
//         if (i + 1 <= size)
//         {
//             cout << "in the reverse if funct "<<endl;
//             swap(number[i], number[i+1]);
//         }
//     }
// }
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++) 
//     {
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
// }
// int main() 
// {
//     int number[100] = {1, 2, 3, 4, 5, 6, 7};
//     int size = 7;  
//     reverse (number, size);
//     printArray(number, size);
// }




// without swap funciton...........
// void reverse(int number[], int size)
// {   int temp;
//     for (int  i = 0; i+1 < size; i+=2)
//     {
//         temp = number[i];
//         number[i] = number[i+1];
//         number[i+1] = temp;
//     }
// }
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++) 
//     {
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
// }
// int main() 
// {
//     int number[100] = {1, 2, 3, 4, 5, 6, 7};
//     int size = 7;  
//     reverse (number, size);
//     printArray(number, size);
// } 












// // Finding unique number Unoptimised soution.............
// int main() 
// {
// int uniqueNumber;
// bool unique = 0;
// int arr[100] = {10 , 3, 7, 3, 6, 2, 7, 6, 7, 2}; 
// int size = 10;
// for (int i = 0; i < size; i ++) 
// {
//     if (unique)
//     {
//         break;
//     }
//     uniqueNumber = arr[i];
//     for (int j = 0; j < size; j++)
//     {
//         if (i == j)
//         {
//             continue;
//         }
//         if (uniqueNumber == arr[j])
//         {
            
//             break;
//         }
//         if (j + 1 == size)
//         {
//             unique = 1;
//         }
//     }
// }
// cout << uniqueNumber;
// }  


// // Finding unique elements Optimised Solution............
// int main() 
// {
// int ans = 0;
// int number[100] = {10 , 3, 1, 3, 6, 6, 7, 1, 7};
// int size = 9;
// for (int i = 0; i < size; i ++) 
// {
//    ans = ans ^ number[i];
// }
// cout << ans;
// } 

















// Finding duplicate number from non consecetive Unoptimised soution.............
// int main() 
// {
// int duplicateNumber;
// bool duplicate = 0;
// int arr[100] = {1 , 2, 5, 3, 4, 5, 6, 7, 8,}; 
// int size = 9;
// for (int i = 0; i < size; i ++) 
// {
//     if (duplicate)
//     {
//         break;
//     }
//     duplicateNumber = arr[i];
//     for (int j = 0; j < size; j++)
//     {
//         if (i == j)
//         {
//             continue;
//         }
//         if (duplicateNumber == arr[j])
//         { 
//             duplicate = 1;  
//             break;
//         }
//     }
// }
// cout << duplicateNumber;
// } 









// Finding duplicate elements from consecetive numbers. Optimised Solution............
// int main() 
// {
// int ans = 0;
// int number[100] = { 1, 3, 4, 2, 5, 3};
// int size = 6;
// for (int i = 0; i < size; i ++) 
// {
//    ans = ans ^ number[i];
// }
// for (int i = 0; i < size; i ++)
// {
//     ans = ans ^ i;
// }
// cout << ans;
// } 




// Finding All duplicate unoptimise solution.......... 

// int main()
// {
// int duplicateNumbers[100];
// int numbers[100] = {3, 5, 2, 6, 2, 9, 6, 2};
// int size = 8;
// int checkNum;
// int k = 0;
// for (int i = 0; i < size; i++) 
// { 
//     checkNum = numbers[i];
//     for(int j = 0; j < size; j++) 
//     {   
//         if (i == j){
//             continue;
//         }
//         if (checkNum == numbers[j])
//         {
//             duplicateNumbers[k] = numbers[j]; 
//             k++;
//         }
//     }
// }

// for(int i = 0; i <3; i++) 
// {
//     cout << duplicateNumbers[i] <<endl;
// }
// } 












// Finding intersection ...Unoptimised........
// int main() 
// {
//     int arr1[100] = {2, 3, 4, 5};
//     int size1 = 4;
//     int arr2[100] = {4, 6, 7, 9, 2};
//     int size2 =5;
//     int intersectNumber[100];
//     int checkNum;
//     int k = 0;

//     for(int i = 0; i < size1; i++) 
//     {
//         checkNum = arr1[i];
//         for(int i = 0; i < size2; i ++) 
//         {
//             if (checkNum == arr2[i])
//             {
//                 intersectNumber[k] = arr2[i];
//                 k++;
//             }
//         }
//     }
//     for(int i = 0; i < 3; i++) 
//     {
//         cout << intersectNumber[i] <<endl;
//     }
// } 


// Another way of doint it.............
// int main()
// {
//     int arr1[100] = {2, 3, 4, 5};
//     int size1 = 4;
//     int arr2[100] = {4, 6, 7, 9, 2};
//     int size2 =5;
//     int intersectNumber[100];
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while(i < size1)
//     {  
//         cout << "i am " <<arr1[i] <<" and i am " <<arr2[j] <<endl;
//         if (j < size2) 
//         {
//                 if (arr1[i] == arr2[j])
//                 {   
//                     cout <<arr1[i] <<" " <<arr2[j] <<" " << "we are in matched" <<endl ;
//                     intersectNumber[k] = arr1[i];
//                     k++;
//                     i++;
//                     j=0;
//                 }
//                 else
//                 {
//                     cout <<" we aren't matched " <<endl;
//                     j++;
//                 }
//         }
//         else 
//                 {
//                     i++;
//                     j = 0;
//                 }
//     }
//     cout << intersectNumber[0];
// }










// Finding pair a and b who's sum will be as an integer s...........
// This is an  Unoptimisied way of doing it . can be compareatbly less unoptimised with using for loop..
// int main()
// {
//     int arr[100] = {1, 2, 3, 4, 5};
//     int size =5;
//     int Number[100];
//     int i = 0;
//     int j = 1;
//     int s = 5;
//     int k = 0;
//     while(i < size)
//     {  
//         cout << "i am " <<arr[i] <<" and i am " <<arr[j] <<endl;
//         if (j <= size) 
//         {
//                 if (arr[i] + arr[j]  == s)
//                 {   
//                     cout <<arr[i] <<" " <<arr[j] <<" " << "we are in matched" <<endl ;
//                     Number[k] = arr[i];
//                     Number[k+1] = arr[j];
//                     k++;
//                     i++;
//                     j = i + 1;
//                 }
//                 else
//                 {
//                     cout <<" we aren't matched " <<endl;
//                     j++;
//                     if (j >= size) 
//                     {
//                         i ++; 
//                         j = i + 1;
//                     }
//                     if (i+1 >= size) 
//                     {
//                         break;
//                     }
//                 }
//         }
//         else 
//                 {
//                     i++;
//                     j = i + 1;
//                 }
//     }
//     cout << Number[0] <<" ";
//     cout << Number[1] << " ";
//     cout << Number[2];
// }
 









// Finding Triple a and b who's sum will be as an integer s...........
// int main() 
// {
//     int arr[100] = {1, 2, 3, 4, 5};
//     int size =5;
//     int Number[100];
//     int s = 12;
//     int k = 0;
//     for (int i = 0; i < size; i++) 
//     {
//         for(int j = i+1; j + 1 < size ; j ++)
//         {
//             // cout << arr[i] << " ";
//             // cout << arr[j] << " " ;
//             // cout << arr[j + 1] << " ";
//             // cout << endl; 
//             if(arr[i] + arr[j] + arr[j+1])
//             {
//             Number[k] = arr[i];
//             Number[k+1] = arr[i+1];
//             Number[k+2] = arr[i+2];
//             }
//         }
//     }
//     cout << Number[0] << " "; 
//     cout << Number[1] << " ";
//     cout << Number[2] << " ";
//     cout << Number[3] <<" ";
// }







// Sorting 0 and 1 ...............
// int main() 
// {
//     int arr2[100];
//     int arr[100] = {1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0};
//     int size = 14;
//     int j = size - 1;
//     int temp = 0;
//     for(int i = 0; i < size; i++)
//     {
//         if(arr[i] == 0)
//         {
//             arr2[temp] = 0;
//             temp ++;
//         }
//         else 
//         {
//             arr2[j] = 1;
//             j --;
//         }
//     }
//     for(int i = 0; i < size; i++)
//     {
//         cout << arr2[i] << " " ;
//     }
// }



// Another way of doint it..................
int main() 
{
    int arr2[100];
    int arr[100] = {1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0};
    int size = 12;
    int i = 0;
    int j = size - 1;
    int temp;
    while(i  < j) 
    {
        while(arr[i] == 0 && i < j)
        {
            i++;
        }
        while(arr[j] == 1 && i < j)
        {
            j--;
        }
        cout << i << " " << j <<endl;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
}




