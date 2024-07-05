#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int times = 0;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i = i+2) {
            times = 0;
            while (times < nums[i]) {
                ans.push_back(nums[i+1]);
                times++;
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    1,2,3,4
  };

  vector<int> ans = S.decompressRLElist(nums);
  for (auto i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
