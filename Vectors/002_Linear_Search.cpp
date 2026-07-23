#include <iostream>
#include <vector>
using namespace std;

void linearSearch(vector<int> nums, int target) {
    for ( int i =0; i < nums.size(); i++){
        if (nums[i] == target){
            cout << "Found at index: " << i << endl;\
            return;
        }
    }
    cout << "Not found" << endl;
}

int main () {
    vector <int> numbers ={ 1, 2, 3, 4, 5};
    int target = 3;
    linearSearch(numbers, target);
    return 0;
}