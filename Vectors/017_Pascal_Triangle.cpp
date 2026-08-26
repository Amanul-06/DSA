#include <iostream>
#include <vector>

using namespace std;

int combination(int n, int r)
{
    int ans = 1;
    for (int i = 0; i < r; i++)
    {
        ans = ans * (n - i) / (i + 1);
    }
    return ans;
}

void printRow(int row)
{
    long long ans = 1;
    for (int i = 0; i < row; i++)
    {
        cout << i << " ";
        ans = ans * (row - 1 - i) / (i + 1);
    }
}

vector<int> getRow(int n)
{
    long long el = 1;
    vector<int> row;
    for (int i = 0; i < n; i++)
    {
        row.push_back(el);
        el = el * (n - 1 - i) / (i + 1);
    }
    return row;
}
vector<vector<int>> printTriangle(int numRows)
{
    vector<vector<int>> ans;
    for (int row = 1; row <= numRows; row++)
    {
        ans.push_back(getRow(row));
    }
    return ans;
}

int main()
{
    int n = 6;
    vector<vector<int>> ans = printTriangle(6);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int i : ans[i])
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}