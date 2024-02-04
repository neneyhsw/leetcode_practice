#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int temp_sum = 0;
        int left = 0, right = 0;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size()-2; i++) {
            // there is no answer that sum can be equal to 0
            // due to array is sorted
            if (nums[i] > 0) break;

            // avoid adding duplicate answers with different sequence
            if (i > 0 && nums[i] == nums[i-1]) continue;

            left = i + 1;
            right = nums.size() - 1;
            while (left < right) {
                temp_sum = nums[i] + nums[left] + nums[right];
                if (temp_sum < 0) {
                    left++;
                } else if (temp_sum > 0) {
                    right--;
                } else {
                    vector<int> temp_ans = {nums[i], nums[left], nums[right]};
                    ans.push_back(temp_ans);

                    // avoid adding duplicate answer
                    while (left < right && nums[left] == temp_ans[1]) {
                        left++;
                    }
                    while (left < right && nums[right] == temp_ans[2]) {
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    -1,0,1,2,-1,-4
  };

  vector<vector<int>> ans = S.threeSum(nums);

  for (auto i : ans) {
    for (int j : i) {
      cout << j << ", ";
    }
    cout << endl;
  }

  return 0;
}
