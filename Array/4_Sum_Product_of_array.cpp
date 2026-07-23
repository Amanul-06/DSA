#include <iostream>
using namespace std;

int sumArray(int arr[], int sz){
    int sum = 0;
    for (int i=0; i<sz; i++){
        sum = sum +arr[i];
    }
    return sum;
}

int productArray(int arr[], int sz){
    int product = 1;
    for (int i=0; i<sz; i++){
        product = product * arr[i];
    }
    return product;
}

int main (){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sz=6;
    cout << "The sum is : " << sumArray(arr,sz) << endl;
    cout << "The product is : " << productArray(arr, sz) << endl;
    return 0;
}