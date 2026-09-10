#include <bits/stdc++.h>

using namespace std;

int maxDepth(string s){
    int depth = 0;
    int maxDepth = INT_MIN;
    for (char ch : s){
        if (ch == '('){
            depth ++;
        }
        else if (ch == ')'){
            depth--;
        }
        maxDepth = max(maxDepth, depth);
    }
    return maxDepth;
}

int main(){
    string s = "(3+(3-1)/(8*2))";
    cout << maxDepth(s);
    return 0;
}