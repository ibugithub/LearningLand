#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> numbers)
{
    for(int i = 0; i < numbers.size(); i++) 
    {
        cout << numbers[i] <<" ";
    }
}

vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    int count = 0;  
    int total = matrix.size()*matrix[0].size();
    int startingRow = 0;
    int endingRow = matrix.size() - 1 ;
    int startingCol = 0;
    int endingCol = matrix[0].size() - 1 ;
    vector<int> newMatrix;
    while(count < total)
    {
        for(int i = startingCol; (i <= endingCol) && (count < total); i++)
        {
            newMatrix.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        for(int i = startingRow; i <= endingRow && count < total; i++) 
        {
            newMatrix.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;
        for(int i = endingCol; i >= startingCol && count < total; i--)
        {
            newMatrix.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        for(int i = endingRow; i >= startingRow && count < total; i--) 
        {
            newMatrix.push_back(matrix[i][startingCol]);    
            count++;
        }
        startingCol++;
    }
    return newMatrix;    
}



int main()
{
    // vector<vector<int>> numbers = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10 }, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    vector<vector<int>> numbers = {{1,2,3,4},{5,6,7,8},{9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<int> ans = (spiralPathMatrix(numbers, 3, 3)); 
    printVector(ans);

}