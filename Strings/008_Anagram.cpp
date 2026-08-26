#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s, string t){
    vector<int> sFreq (26,0);
    vector<int> tFreq (26,0);
    for (int i =0; i<s.length(); i++){
        sFreq[s[i]-'a']++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        tFreq[t[i] - 'a']++;
    }
    if (sFreq ==tFreq){
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    string s = "anagram";
    string t = "naagram";
    cout << isAnagram(s,t);
    return 0;
}