#include <iostream>
#include <vector>

using namespace std;

int secondLargest(vector<int> arr)
{
    int largest = arr[0];
    int sLargest = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << secondLargest(prices);
    return 0;
}