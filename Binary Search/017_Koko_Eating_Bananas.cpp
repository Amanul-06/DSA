#include <iostream>
#include <vector>

using namespace std;

long long reqTime(vector<int> piles, int hourlyRate)
{
    long long total = 0;
    for (int i : piles)
    {
        total = total + ceil((double)i / (double)hourlyRate);
    }
    return total;
}

int maxPiles(vector<int> piles)
{
    int max = INT_MIN;
    for (int i : piles)
    {
        if (i > max)
            max = i;
    }
    return max;
}

int minEatingSpeed(vector<int> piles, int h)
{
    int low = 1;
    int high = maxPiles(piles);
    int ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (reqTime(piles, mid) <= h)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << minEatingSpeed(piles, h) << endl;
    return 0;
}