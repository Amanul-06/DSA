#include <bits/stdc++.h>

using namespace std;

void mySort(vector<pair<char, int>> &chars)
{
    int n = chars.size();
    for (int i = 0; i<n-1; i++){
        int maxIndex = i;
        for (int j=i+1; j<n; j++){
            if (chars[j].second > chars[maxIndex].second){
                maxIndex = j;
            }
        }
        swap(chars[i], chars[maxIndex]);
    }
}

string frequencySort(string s){
    vector<int> freq(256,0);
    for (char ch:s){
        freq[ch]++;
    }
    vector<pair<char,int>> chars;
    for (int i =0; i<256; i++){
        if(freq[i]>0){
            chars.push_back({(char)i, freq[i]});
        }
    }
    mySort(chars);
    string ans;
    for (auto p: chars){
        ans +=string(p.second, p.first);
    }
    return ans;
}

int main(){
    string s = "sTreet";
    cout << frequencySort(s);
    return 0;
}