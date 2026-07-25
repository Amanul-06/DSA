#include <iostream>
using namespace std;
void intersect( int arr1[], int sz1, int arr2[], int sz2){
    for(int i=0; i<sz1; i++){
        for(int j=0; j<sz2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
            }
        }
    }
}
int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int sz1 = 5;
    int arr2[] = {3, 4, 5, 6,};
    int sz2 = 4;
    cout << "Intersection of the two arrays: ";
    intersect(arr1, sz1, arr2, sz2);
    return 0;
}