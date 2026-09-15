#include <bits/stdc++.h>

using namespace std;

int reverse(int n)
{
    int sum = 0;
    while (n != 0)
    {
        if (sum > INT_MAX / 10 || sum < INT_MIN / 10)
        {
            return 0;
        }
        int lastDigit = n % 10;
        sum = sum * 10 + lastDigit;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n = 1778900;
    cout << reverse(n);
    return 0;
}