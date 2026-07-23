#include <iostream>
using namespace std;
int main() {
    int arr[] = {12, 4, 56, 23, 6, 15, 8, 27, 33};
    int sz = 9;
    int smallest = INT_MAX;
    for (int i=0; i<sz; i++){
        if (arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout << "Smallest number is : " << smallest;
    return 0;
}