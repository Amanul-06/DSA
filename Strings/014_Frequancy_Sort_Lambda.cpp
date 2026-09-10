#include <bits/stdc++.h>

using namespace std;

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
    //lambda function to sort the vector of pairs based on frequency in descending order
    sort(chars.begin(), chars.end(), [](const auto&a, const auto& b){
        return a.second > b.second;
    });
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