#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        int MaxWidth = 0;
        stack<int> s;

        for (int i = 0; i < n; i++) {
          if (s.empty() || nums[s.top()] > nums[i]) {
            s.push(i);
          }
        }

        for (int j = n - 1; j >= 0; j--) {
          while (!s.empty() && nums[s.top()] <= nums[j]) {
            MaxWidth = max(MaxWidth, j - s.top());
            s.pop();
          }
        }

        return MaxWidth;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {6,0,8,2,1,5};

  cout << S.maxWidthRamp(nums) << endl;

  return 0;
}
