#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        int left = 0;
        int right = nums.size() - 1;

        sort(nums.begin(), nums.end());
        while (left < right) {
            if (nums[left] + nums[right] < target) {
                count += right - left;
                left++;
            } else {
                right--;
            }
        }
        return count;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    -1,1,2,3,1
  };
  int target = 2;

  cout << S.countPairs(nums, target) << endl;

  return 0;
}
