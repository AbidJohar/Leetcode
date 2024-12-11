#include <bits\stdc++.h>

using namespace std;
vector<int> twoSum(vector<int> &numbers, int target)
{

    int left = 0, right = numbers.size() - 1;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[right] + numbers[left] == target)
        {
            return {left + 1, right + 1};
        }
        if (numbers[right] + numbers[left] > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return {};
}

int main()
{
    vector<int> numbers = {0, 0, 3, 4};
    int target = 0;
    vector<int> result = twoSum(numbers, target);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}