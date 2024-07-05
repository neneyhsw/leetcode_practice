#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < k) {
                ans++;
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    2,11,10,1,3
  };
  int k = 10;

  cout << S.minOperations(nums, k) << endl;

  return 0;
}
