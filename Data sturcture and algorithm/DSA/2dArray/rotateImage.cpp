#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) 
{   
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    for(int col = 0; col < colSize; col++) 
    {
        for(int row = rowSize - 1; row >= 0; row--) 
        {
            cout << matrix[row][col] <<" ";
        }
    }
}


int main() 
{
    // vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}, {10, 11, 12}};
    // vector<vector<int>>matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
}