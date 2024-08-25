#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> umap;
        vector<vector<int>> ans;
        vector<int> temp;
        bool finish_flag = true;

        for (int i : nums) {
            umap[i]++;
        }
        while (1) {
            temp.clear();
            finish_flag = true;
            for (auto num : umap) {
                if (num.second > 0) {
                    temp.push_back(num.first);
                    umap[num.first]--;
                    finish_flag = false;
                }
            }
            if (!finish_flag) ans.push_back(temp);
            else break;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {
    1,3,4,1,2,3,1
  };

  vector<vector<int>> ans = S.findMatrix(nums);
  for (vector<int> v : ans) {
    for (int i : v) {
      cout << i << ", ";
    }
    cout << endl;
  }

  return 0;
}
