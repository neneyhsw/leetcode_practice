#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> umap;
        
        for (int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;
        }
        for (auto iter = umap.begin(); iter != umap.end(); iter++) {
            if (iter->second == 2) {
                ans.push_back(iter->first);
            }
        }

        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> v = {
    7,1,5,4,3,4,6,0,9,5,8,2
  };

  vector<int> ans = S.getSneakyNumbers(v);
  for (int i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
