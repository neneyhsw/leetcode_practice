#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                red++;
            }
            else if (nums[i] == 1) {
                white++;
            }
        }
        int index = 0;
        for (int i = 0; i < red; i++) {
            nums[i] = 0;
            index++;
        }
        for (int i = index; i < red+white; i++) {
            nums[i] = 1;
            index++;
        }
        for (int i = index; i < nums.size(); i++) {
            nums[i] = 2;
        }
        return;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {2,0,2,1,1,0};

  S.sortColors(nums);
  for (auto i : nums) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
