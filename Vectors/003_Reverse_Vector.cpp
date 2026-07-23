#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector <int>& vec) {
    int n = vec.size() - 1;
    int i = 0;
    while (i<n) {
        swap (vec[i], vec[n]);
        i++;
        n--;
    }

}
int main() {
    vector <int> vec = {1, 2, 3, 4, 5};
    reverseVector(vec);
    for (int val : vec) {
        cout << val << " ";

    }
    return 0;
}