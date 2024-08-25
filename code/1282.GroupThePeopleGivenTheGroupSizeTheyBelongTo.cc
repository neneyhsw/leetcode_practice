#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        vector<int> count_v(501);
        unordered_map<int, vector<int>> unmap;

        for (int i = 0; i < groupSizes.size(); i++) {
            count_v[groupSizes[i]]++;
            unmap[groupSizes[i]].push_back(i);

            if (count_v[groupSizes[i]] == groupSizes[i]) {
                count_v[groupSizes[i]] = 0;
                ans.push_back(unmap[groupSizes[i]]);
                unmap[groupSizes[i]].clear();
                continue;
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums = {3,3,3,3,3,1,3};

  vector<vector<int>> ans = S.groupThePeople(nums);
  for (auto i : ans) {
    for (auto j : i) {
        cout << j << ", ";
    }
    cout << endl;
  }

  return 0;
}
