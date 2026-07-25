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

int diagonalSum(vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum+= matrix[i][i];
        if(i!=n-1-i){
            sum+= matrix[i][n-1-i];
        }
    }
    return sum;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 8;

    printMatrix(matrix);

    int ans = diagonalSum(matrix);
    cout << ans;
    return 0;
}