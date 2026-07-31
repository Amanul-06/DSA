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
    int col0 = matrix[0][0];
    for(int i =0; i<n; i++){
        for(int j=0;j<m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0]=0;
                if (j!=0){
                    matrix[0][j] = 0;
                }
                else {
                    col0 = 0;
                }
                
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if(matrix[i][j]!=0){
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0]==0){
        for(int j=0; j<m; j++){
            matrix[0][j]=0;
        }
    }

    if(col0==0){
        for(int i=0; i<n; i++){
            matrix[i][0]=0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 0, 1}, {0, 1, 1, 1}};
    printMatrix(matrix);
    cout << endl;
    setZeroes(matrix);
    printMatrix(matrix);

    return 0;
}