#include <iostream>
#include <vector>
using namespace std;



bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    int row = 0;
    int col = colSize - 1;
    while(row < rowSize)
    {   
        cout << matrix[row][col] <<"\n";
        if(matrix[row][col] > target)
        {
            col--;
        }
        else if(matrix[row][col] < target)
        {
            row++;
        }
        else
        {return true;}
    }
    return false;

}

int main() 
{
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}}; 
    cout << searchMatrix(matrix, 23);
}