#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<char> arr = {'h', 'e', 'l', 'l', 'o'};
    int st=0, end = arr.size() - 1;
    while (st<end) {
        swap(arr[st++], arr[end--]);
    }
    cout << "Reversed array: ";
    for (char c : arr) {
        cout << c;
    }
    return 0;
}