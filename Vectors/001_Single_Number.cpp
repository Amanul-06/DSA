#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;

    for (int val : nums){
        ans = ans ^ val;
    }

    return ans;

}
int main() {
    vector <int> numbers ={ 1, 2, 2, 4, 1};
    cout << singleNumber(numbers) << endl;
    return 0;
}