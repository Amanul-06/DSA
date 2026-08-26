#include <iostream>
#include <vector>
using namespace std;

int compression(vector<char> &s){
    int a=0;
    int n = s.size();
    int i=0;
    while(i<n){
        if (i== n-1 || s[i]!= s[i+1]){
            s[a]=s[i];
            a++;
            i++;
        }
        else{
            char ch = s[i];
            int count =0;
            s[a]=ch;
            a++;
            while(i<n && s[i]==ch){
                count ++;
                i++;
            }
            if (count < 10){
                s[a]=count+ '0';
                a++;
            }
            else{
                string num = to_string(count);
                for (char c: num){
                    s[a]=c;
                    a++;
                }
            }
        }
    }
    return a;

}
int main()
{
    vector<char> str = {
        'a', 'a', 'b','b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'c', 'c', 'c'};
    cout << compression(str) << endl;
    for (char ch : str){
        cout << ch << " ";
    }
    return 0;
}