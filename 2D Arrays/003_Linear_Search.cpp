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

pair<int,int> linearSearch(vector<vector<int>> matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i =0; i<n; i++){
        for (int j=0; j<m; j++){
            if(matrix[i][j]==target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int target = 8;

    printMatrix(matrix);

    pair<int,int> ans = linearSearch(matrix, target);
    cout << ans.first << " " << ans.second;
    return 0;
}