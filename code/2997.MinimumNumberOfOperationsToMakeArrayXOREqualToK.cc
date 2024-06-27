#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int b = 0;
        int count = 0;
        for (auto i : nums) {
            b ^= i;
        }

        b ^= k;
        while (b) {
            count++;
            b &= b - 1;
        }
        return count;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    2,1,3,4
  };
  int k = 1;

  cout << S.minOperations(nums, k) << endl;

  return 0;
}
