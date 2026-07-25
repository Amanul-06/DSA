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

int maxRowSum(vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[1].size();
    int maxSum = INT_MIN;
    for (int i = 0; i<n; i++){
        int sum = 0;
        for (int j=0; j<m;j++){
            sum+= matrix[i][j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int target = 8;

    printMatrix(matrix);

    int ans = maxRowSum(matrix);
    cout << ans;
    return 0;
}