#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums) {
        int ans = 0;
        
        sort(nums.begin(), nums.end());

        // compare all possibilities
        if (nums.size() < 5) return ans;
        ans = min((nums[nums.size()-4] - nums[0]), (nums[nums.size()-1] - nums[3]));
        ans = min(ans, (nums[nums.size()-3] - nums[1]));
        ans = min(ans, (nums[nums.size()-2] - nums[2]));
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    1,5,0,10,14
  };
  cout << S.minDifference(nums) << endl;

  return 0;
}
