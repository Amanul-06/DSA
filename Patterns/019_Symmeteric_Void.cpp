#include <iostream>

using namespace std;

void patternTop(int n){
    for (int i = 0; i < n; i++)
    {
        // Star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        // Star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void patternBottom(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 0; j < 2 *(n-i-1); j++)
        {
            cout << " ";
        }
        // Star
        for (int j = 0; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern(int n){
    patternTop(n);
    patternBottom(n);
}

int main()
{
    int n = 5;
    pattern(n);
    return 0;
}