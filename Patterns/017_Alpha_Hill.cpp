#include <iostream>

using namespace std;

void pattern(int n){
    for (int i=0; i<n; i++){
        for(int j=1; j<n-i;j++){
            cout << " ";
        }
        char ch = 'A';
        for(int j=0; j<=i; j++){
            cout << ch;
            ch++;
        }
        ch--;
        ch--;
        for(int j=i; j>0; j--){
            cout << ch;
            ch--;
        }
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    pattern(n);
    return 0;
}