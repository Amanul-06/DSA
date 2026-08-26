#include <iostream>
#include <vector>
using namespace std;

bool checkInclusion(string s1, string s2){
    if(s1.length() > s2.length()){
        return false;
    }
    vector <int> freq (26,0);
    for (int i=0; i<s1.length(); i++){
        freq[s1[i]-'a']++;
    }
    int windowSize = s1.length();
    vector <int> windowFreq (26,0);

    for (int i=0; i<windowSize; i++){
        windowFreq[s2[i]-'a']++;
    }
    if (freq == windowFreq){
        return true;
    }

    for (int i= windowSize; i< s2.length(); i++){
        windowFreq[s2[i-windowSize]-'a']--;
        windowFreq[s2[i]-'a']++;
        if (freq == windowFreq)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string str = "eidboaoo";
    string part = "ab";
    cout << checkInclusion(part, str) << endl;
    return 0;
}