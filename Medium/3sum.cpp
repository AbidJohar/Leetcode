#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> results;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int right = nums.size() - 1;
        int left = i + 1;
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        while (left < right)
        {

            if (nums[right] + nums[left] + nums[i] == 0)
            {
                results.push_back({nums[i], nums[left], nums[right]});
                left++;
                while (nums[left] == nums[left - 1] && left < right)
                {
                    left++;
                }
            }
            if (nums[right] + nums[left] + nums[i] > 0)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }

    return results;
}

int main()
{
    vector<int> numbers = {-1, 0, 1, 0};
    vector<vector<int>> results = threeSum(numbers);

    // Print the results
    for (const auto &triplet : results)
    {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); i++)
        {
            cout << triplet[i];
            if (i < triplet.size() - 1)
                cout << ", ";
        }
        cout << "] ";
    }
    return 0;
}
