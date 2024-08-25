#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]%3 != 0) {
                ans++;
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

  cout << S.minimumOperations(nums) << endl;

  return 0;
}
