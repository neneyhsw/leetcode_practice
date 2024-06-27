#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        vector<int> v;
        int temp = 0;
        int count = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            temp = i;
            count = 0;
            while (temp) {
                temp &= temp - 1;
                count++;
            }
            if (count == k) {
                v.push_back(i);
            }
        }
        for (auto i : v) {
            ans += nums[i];
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    5,10,1,5,2
  };
  int k = 1;

  cout << S.sumIndicesWithKSetBits(nums, k) << endl;

  return 0;
}
