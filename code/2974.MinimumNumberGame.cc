#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i = i+2) {
            ans.push_back(nums[i+1]);
            ans.push_back(nums[i]);
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    5,4,2,3
  };

  vector<int> ans = S.numberGame(nums);
  for (auto i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
