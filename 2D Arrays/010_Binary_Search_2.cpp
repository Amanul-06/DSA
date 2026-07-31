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

vector<int> search(vector<vector<int>> matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int i=0, j=m-1;
    while(i<n && j>=0){
        if(matrix[i][j]==target){
            return {i,j};
        }
        else if ( matrix[i][j]< target){
            i++;
        }
        else{
            j--;
        }
    }
    return {-1,-1};
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
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