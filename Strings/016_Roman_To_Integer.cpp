#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s){
    map <char, int> value ={{'I',1}, {'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int ans =0;
    for (int i =0; i<s.length()-1; i++){
        int current = value[s[i]];
        int next = value[s[i+1]];
        if (current<next){
            ans-=current;
        }
        else{
            ans+=current;
        }
    }
    int last = value[s[s.length() - 1]];
    ans += last;
    return ans;
}

int main (){
    string s = "CCVII";
    cout << romanToInt(s);
    return 0;
}