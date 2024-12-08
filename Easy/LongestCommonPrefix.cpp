#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());

         int a = strs.size();

         string n = strs[0], m= strs[a-1], prefix= "";

         for (int i= 0; i<n.size(); i++){
            if(n[i] == m[i]) { 
                 prefix += n[i];
             } else
             break;
         }
      return prefix;
    }





//_______________Brute force__________________
    // string longestCommonPrefix(vector<string> &strs)
    // {
    //     int size = strs[0].length();

    //     for (auto str : strs)
    //     {
    //         if (str.length() < size)
    //         {
    //             size = str.length();
    //         }
    //     }
    //     string prefix = "";

    //     for (int i = 0; i < size; i++)
    //     {
    //         char ch = strs[0][i]; // ch=f

    //         for (auto str : strs)
    //         { // flower // f
    //             if (ch != str[i])
    //             {

    //                 return prefix;
    //             }
    //         }
    //         prefix += ch;
    //     }
    //     return prefix;
    // }
};

int main()
{
    Solution sol;
    vector<string> arr = {"flower", "flow", "floght"};
    cout << sol.longestCommonPrefix(arr);

    return 0;
}