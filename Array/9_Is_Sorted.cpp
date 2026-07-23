#include <iostream>
#include <vector>

using namespace std;

int isSorted(vector <int> arr){
    for ( int i = 1; i< arr.size(); i++){
        if (arr[i]>=arr[i-1]){

        } 
        else {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << isSorted(prices);
    return 0;
}