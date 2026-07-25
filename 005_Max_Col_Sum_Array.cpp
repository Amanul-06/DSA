#include <iostream>
#include <vector>

using namespace std;


int getColSum(int matrix[][3], int n, int m){
    int maxSum=INT_MIN;
    for(int j=0; j<m; j++){
        int sum = 0;
        for( int i=0; i<n; i++){
            sum+= matrix[i][j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main()
{
    int matrix [4][3]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};


    int ans = getColSum(matrix, 4, 3);
    cout << ans;
    return 0;
}