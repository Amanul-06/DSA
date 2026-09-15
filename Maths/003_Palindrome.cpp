#include <bits/stdc++.h>

using namespace std;

bool palindrome(int n)
{
    int dup = n;
    int rev = 0;

    if (n < 0)
    {
        return false;
    }

    while (n != 0)
    {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }
    return (rev==dup);
}

int main()
{
    int n = 1771;
    cout << palindrome(n);
    return 0;
}