#include <bits\stdc++.h>

using namespace std;

//  int removeDuplicates(vector<int>& nums) {
//      int k;

//      if( nums.size() == 0){
//         return 0;
//      } 
//       k=1;
//       int extra = nums[nums.size()-1]+2;
//      for( int i=0; i<nums.size()-1; i++){
//           if(nums[i] == nums[i+1]){   // 1,1
//               nums[i] = extra;
//              }
//              else{
//              k++;
//              }
              
//           }
//           sort(nums.begin(), nums.end());

//         return  k;
//      } 
 int removeDuplicates(vector<int>& nums) {
      int i=1;
      for (int j=1; j<nums.size(); j++) 
        if( nums[j] != nums[i-1]) nums[i++] = nums[j];
      
      return i;
     } 

int main(){

  vector<int> nums = {1,2,3,3,4,5,6,6,6};

  cout<<removeDuplicates(nums)<<endl;
  for (auto i : nums){
    cout<<i<<" ";
  }
    return 0;
}