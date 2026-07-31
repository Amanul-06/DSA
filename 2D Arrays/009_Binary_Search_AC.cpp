#include <iostream>
#include <vector>

using namespace std;

void printMatrix(vector<vector<int>> mat)
{
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int searchRow(vector<int> row, int target){
    int m = row.size();
    int low = 0, high = m - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (row[mid] == target)
        {
            return mid;
        }
        else if (row[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

vector<int> search(vector<vector<int>> matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int lowRow = 0, highRow = n - 1;
    while (lowRow <= highRow)
    {
        int midRow = (lowRow + highRow) / 2;
        if (target < matrix[midRow][0])
        {
            highRow = midRow - 1;
        }
        else if (target <= matrix[midRow][m - 1])
        {
            int col=searchRow(matrix[midRow], target);
            if (col!=-1){
                return {midRow, col};
            }
            else {
                return {-1,-1};
            }
            
        }
        else
        {
            lowRow = midRow + 1;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 26}};
    printMatrix(matrix);
    cout << endl;
    int target = 11;
    vector<int> ans = search(matrix, target);
    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}