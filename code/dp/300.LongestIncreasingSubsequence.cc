#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        vector<int> dp_arr(n, 1);

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    dp_arr[i] = max(dp_arr[i], dp_arr[j] + 1);
                }
            }
        }

        // Find the max value in the dp arr
        for (int i = 0; i < n; i++) {
            if (ans < dp_arr[i]) {
                ans = dp_arr[i];
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    10,9,2,5,3,7,101,18
  };

  cout << S.lengthOfLIS(nums) << endl;

  return 0;
}
