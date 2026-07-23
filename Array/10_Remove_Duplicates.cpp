#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates( vector<int> &nums){
    int i =0;
    for(int j=1;j<nums.size();j++)
    {
        if(nums[i]!= nums[j])
        {
            nums[i+1] = nums[j];
            i++;
        }
    }
    return i+1;

}
int main()
{
    vector<int> prices = {1, 1, 2, 3, 3, 4};
    cout << removeDuplicates(prices);
    return 0;
}