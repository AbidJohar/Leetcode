#include <bits/stdc++.h>

using namespace std;

//   ______________Brute force ___________________
// int maxArea(vector<int>& height) {
//     int h,w,maxVol=0, volume;
//          for (int i=0; i<height.size(); i++){
//             for(int j=i; j<height.size(); j++){
//                h = min(height[i], height[j]);
//                w= j-i;
//                volume = w*h;
//                  if (volume > maxVol){
//                     maxVol = volume;
//                  }

//             }

//          }

//          return maxVol;

// }

int maxArea(vector<int> &height)
{
    int left = 0, right = height.size() - 1, mxVol=0;
    for (int i = 0; i < height.size(); i++)
    {
        int  h=0, w=0;
        h = min(height[left], height[right]);
        w = height.size() - i - 1;
        mxVol = max(h * w, mxVol);

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return mxVol;
}

int main()
{

    vector<int> numbers = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(numbers);

    return 0;
}