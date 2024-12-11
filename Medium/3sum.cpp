#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> results;
    vector<vector<int>> threeSum;
    for (int i = 0; i < nums.size(); i++) {
        for(int j=0; j<nums.size(); j++ ){
            for(int k=0; j<nums.size(); j++){
                if(nums[i] + nums[j] + nums[k] == 0){
                    results.push_back({nums[i],nums[j],nums[k]});
                    k++;
                }
            }
                j++;
        }
                i++;
        }
    return results;
}

int main() {
    vector<int> numbers = {-1,0,1,2,-1,-4};
    vector<vector<int>> results = threeSum(numbers);

    // Print the results
    for (const auto& triplet : results) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "] ";
    }
    return 0;
}
