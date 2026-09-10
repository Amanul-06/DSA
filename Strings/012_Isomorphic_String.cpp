#include <bits/stdc++.h>

using namespace std;

bool isIsomorphic(string s, string t){
    unordered_map<char, char> mapST;
    unordered_map<char, char> mapTS;
    if(s.size()!=t.size()) return false;
    for (int i = 0; i<s.size(); i++){
        char x = s[i];
        char y = t[i];
        if(mapST.count(x)){
            if(mapST[x] != y){
                return false;
            }
        }
        else {
            mapST[x] = y;
        }
        if (mapTS.count(y))
        {
            if (mapTS[y] != x)
            {
                return false;
            }
        }
        else
        {
            mapTS[y] = x;
        }
    }
    return true;
}

int main(){
    string s = "paper";
    string t = "title";
    cout << isIsomorphic(s,t);
    return 0;
}