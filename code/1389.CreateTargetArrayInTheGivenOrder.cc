#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> target(n, -1);
        int prep = 0, curr = 0, j = 0;

        for (int i = 0; i < n; i++) {
            if (target[index[i]] == -1) {
                target[index[i]] = nums[i];
            } else {
                j = n - 1;
                while (j > index[i]) {
                    target[j] = target[j-1];
                    j--;
                }
                target[index[i]] = nums[i];
            }
        }
        return target;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    0,1,2,3,4
  };
  vector<int> index = {
    0,1,2,2,1
  };

  vector<int> target = S.createTargetArray(nums, index);
  for (auto i : target) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
