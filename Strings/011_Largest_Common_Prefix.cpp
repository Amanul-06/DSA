#include <iostream> 
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs){
    string ans = "";
    for (int i =0; ; i++){
        char checker = strs[0][i];
        bool match = true;
        for(string str : strs){
            if (i>= str.length()){
                match = false;
                break;
            } 
            if(str[i]!=checker){
                match = false;
                break;
            }
        }
        if (match==true){
            ans += checker;
        }
        else break;
        
    }
    return ans;
}

int main (){
    vector <string> strs = {"flower", "flow", "flight"};
    string ans = longestCommonPrefix(strs);
    cout << ans;
    return 0;
}