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

vector<int> spiralPrint(vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    int top = 0, bottom = n-1;
    int left = 0, right = m-1;
    vector<int> ans;

    while(top<= bottom && left<= right){
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;   
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4, 5, 6}, {20, 21, 22, 23, 24, 7}, {19, 32, 33, 34, 25, 8}, {18, 31, 36, 35, 26, 9}, {17, 30, 29, 28, 27, 10}, {16, 15, 14, 13, 12, 11}};
    printMatrix(matrix);
    cout << endl;
    vector<int> ans = spiralPrint(matrix);
    for(int i : ans){
        cout << i << " ";
    }

    return 0;
}