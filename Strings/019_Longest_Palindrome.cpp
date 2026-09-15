#include <bits/stdc++.h>

using namespace std;

int expandAroundCentre(string s, int left, int right){
    while(left>=0 && right<s.length() && s[left]==s[right]){
        left--;
        right++;
    }
    return right-left+1-2; 
    // here for example baaaac, the loop ends at right=5 left =0 so 5-0-1 not 5-0+1
}

string longestPalindrome(string s){
    int start = 0;
    int end = 0;
    for(int i=0; i<s.length(); i++){
        int odd = expandAroundCentre(s,i,i);
        int even = expandAroundCentre(s,i,i+1);
        int len = max(odd, even);

        if (len > end-start){
            start = i - (len-1)/2;
            end = i + (len)/2;
        }
    }
    return s.substr(start, end - start + 1);
}

int main (){
    string s = "bcadadabc";
    cout << longestPalindrome(s);
    return 0;
}
