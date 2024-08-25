#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans, empty;
        vector<int> temp;
        int min_num, max_num = 0;

        if (nums.size() % 3 != 0) {
            return empty;
        }

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            if (temp.size() == 3) {
                min_num = min(temp[0], min(temp[1], temp[2]));
                max_num = max(temp[0], max(temp[1], temp[2]));
                if (max_num - min_num > k) {
                    return empty;
                }

                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    1,3,4,8,7,9,3,5,1
  };
  int k = 2;

  for (auto i : S.divideArray(nums, k)) {
    for (auto j : i) {
      cout << j << ", ";
    }
    cout << endl;
  }

  return 0;
}
