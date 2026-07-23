#include <vector>
#include <iostream>

using namespace std;

int maxArea(vector<int>& height) {
    int n= height.size();
    int maxArea = INT_MIN;
    int left = 0, right = n-1;
    while (left < right){
        int area = min(height[left],height[right]) * (right - left);
        maxArea = max(maxArea, area);
        if (height[left] < height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return maxArea;
}

int main (){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int water = maxArea(height);
    cout << water;
    return 0;
}