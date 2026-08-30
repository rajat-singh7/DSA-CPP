// Leetcode Problem 1552:
// Magnetic force Betweeen two balls:
// Binary search one answer Approach and Greedy algorithm:
// This question is similar as Agressive Cow Problem:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> &position, int m, int mid)
{
    int magnet_count = 1;
    int last_position = position[0];
    for (int i = 0; i < position.size(); i++)
    {
        if (position[i] - last_position >= mid)
        {
            magnet_count++;
            last_position = position[i];
        }
        if (magnet_count == m)
        {
            return true;
        }
    }
    return false;
}

class Solution
{
public:
    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());
        int start = 0;
        int maxi = -1;
        for (int i = 0; i < position.size(); i++)
        {
            maxi = max(maxi, position[i]);
        }
        int end = maxi;
        int ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (isPossible(position, m, mid))
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}