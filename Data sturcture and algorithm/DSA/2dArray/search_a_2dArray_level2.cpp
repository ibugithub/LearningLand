#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int start = 0;
    int colSize = matrix[0].size();
    int rowSize = matrix.size();
    int end = (colSize * rowSize) - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {   
        if (matrix[mid / colSize][mid % colSize] > target)
        {
            end = mid - 1;
        }
        else if (matrix[mid / colSize][mid % colSize] < target)
        {
            start = mid + 1;
        }
        else
        {
            return true;
        }
        mid = (start + end) / 2;
    } 
    return false;
}
int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}};
    cout << searchMatrix(matrix, 3);
    cout << 0 % 2;
}