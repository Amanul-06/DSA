#include <iostream>
using namespace std;

void swapMinMax(int arr[], int sz){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;
    for (int i=0; i<sz; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
            smallestIndex = i;
        }
        if (arr[i] > largest){
            largest = arr[i];
            largestIndex = i;
        }
    }
    swap(arr[smallestIndex], arr[largestIndex]);
}

int main (){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sz=6;
    swapMinMax(arr, sz);
    for (int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
    return 0;
}