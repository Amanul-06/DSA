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
    int ans = 1;
    for (int i = 0; i < row; i++)
    {
        cout << ans << " ";
        ans = ans * (row - 1 - i) / (i + 1);
    }
}

int main()
{
    int n = 6;
    printRow(6);
    return 0;
}