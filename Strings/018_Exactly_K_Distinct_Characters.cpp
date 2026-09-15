#include <bits/stdc++.h>
using namespace std;

int atmostK(string s, int k){
    int n = s.length();
    int left = 0;
    int count = 0;
    int distinct =0;

    unordered_map<char,int> freq;

    for(int right =0; right<n; right++){
        freq[s[right]]++;
        if (freq[s[right]]==1){
            distinct++;
        }

        while (distinct >k){
            freq[s[left]]--;
            if (freq[s[left]]==0){
                distinct--;
            }
            left++;
        }

        count += right-left+1;
    }
    return count;
}


int exactlyK(string s, int k){
    return atmostK(s,k)-atmostK(s,k-1);
}
int main (){
    string s = "pqpqs";
    int k =2;
    cout << exactlyK(s,k);
    return 0;
}