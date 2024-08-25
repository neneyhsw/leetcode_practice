#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int temp = 0, d = 0;
        int n = nums.size();
        vector<int> converted_nums;
        vector<int> nums_copy = nums;
        vector<int> sorted_index(n);
        
        for (int i = 0; i < n; i++) {
            sorted_index[i] = i;
        }

        for (int i = 0; i < n; i++) {
            temp = 0;
            d = 1;
            if (nums_copy[i] == 0) {
                converted_nums.push_back(mapping[temp]);
                continue;
            }
            while (nums_copy[i] != 0) {
                temp += mapping[nums_copy[i]%10] * d;
                d *= 10;
                nums_copy[i] /= 10;
            }
            converted_nums.push_back(temp);
        }
        
        sort(sorted_index.begin(), sorted_index.end(), [&converted_nums](int i, int j) {
            return converted_nums[i] < converted_nums[j];
        });

        vector<int> sorted_nums;
        for (int i = 0; i < n; i++) {
            sorted_nums.push_back(nums[sorted_index[i]]);
        }

        return sorted_nums;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> mapping = {8,9,4,0,2,1,3,5,7,6};
  vector<int> nums = {991,338,38};

  vector<int> ans = S.sortJumbled(mapping, nums);
  for (auto i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
