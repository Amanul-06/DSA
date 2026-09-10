#include <bits/stdc++.h>

using namespace std;

bool rotateString(string s, string goal){
    if (s.length() != goal.length()){
        return false;
    }
    string temp = s+s;
    //if (temp.find(goal) <temp.length()){
    if (temp.find(goal) != string::npos){
        return true;
    }
    else return false;
}
int main(){
    string s = "abcde";
    string goal = "cdeab";
    cout << rotateString(s,goal);
    return 0;
}