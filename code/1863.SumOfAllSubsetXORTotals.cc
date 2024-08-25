#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void dfs(vector<int> &nums, int index, vector<int> &cur_subset, vector<vector<int>> &all_subset) {
    if (index == nums.size()) {
      all_subset.push_back(cur_subset);
      return;
    }

    // exclude current element
    dfs(nums, index+1, cur_subset, all_subset);
    
    // include current element
    cur_subset.push_back(nums[index]);
    dfs(nums, index+1, cur_subset, all_subset);
    cur_subset.pop_back();
    return;
  }

  int subsetXORSum(vector<int>& nums) {
    vector<vector<int>> all_subset;
    vector<int> cur_subset;

    // Get all subsets
    dfs(nums, 0, cur_subset, all_subset);

    int ans = 0;
    for (auto i : all_subset) {
      int temp = 0;
      for (auto j : i) {
        temp ^= j;
      }
      ans += temp;
    }
    return ans;
  }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {5, 1, 6};
  cout << S.subsetXORSum(nums) << endl;
  
  return 0;
}
