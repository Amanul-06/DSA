#include <iostream>

using namespace std;

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    pattern2(n);
    pattern5(n-1);
    return 0;
}