#include <iostream>

using namespace std;

void pattern(int n){
    
    for (int i=0; i<n; i++){
        for(char ch='A'; ch<'A'+5-i; ch++){
            cout << ch <<  " ";
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