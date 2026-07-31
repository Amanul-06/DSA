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

void setZeroes(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row (n, 0);
    vector<int> col (m, 0);

    for(int i =0; i<n; i++){
        for(int j=0;j<m; j++){
            if(matrix[i][j] == 0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i]||col[j])
            {
                matrix[i][j]=0;
            }
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1, 1}, {1, 0, 0, 1}, {1, 1, 0, 1}, {1, 1, 1, 1}};
    printMatrix(matrix);
    setZeroes(matrix);
    printMatrix(matrix);

    return 0;
}