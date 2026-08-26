#include <iostream>
#include <vector>
using namespace std;

int compression(vector<char> &s){
    int index=0;
    int n = s.size();
    for (int i=0; i<n; i++){
        char ch = s[i];
        int count = 0;
        while (i < n && s[i] == ch)
        {
            count++;
            i++;
        }
        if (count ==1){
            s[index++] = ch;
        }
        else {
            s[index++] = ch;
            string num = to_string(count);
            for (char dig : num)
            {
                s[index++] = dig;
            }
        }
        i--;
    }
    return index;

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