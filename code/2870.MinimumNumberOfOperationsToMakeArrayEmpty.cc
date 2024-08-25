#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> umap;
        bool impossible_flag = false;
        int ans = 0;

        for (int i : nums) {
            umap[i]++;
        }
        for (auto iter : umap) {
            if (iter.second == 1) {
                impossible_flag = true;
                break;
            } else if (iter.second == 2) {
                ans++;
            } else if (iter.second % 3 == 0) {
                ans += iter.second / 3;
            } else if (iter.second % 3 == 2) {
                ans += iter.second / 3 + 1;
            } else if (iter.second % 3 == 1) {
                ans += (iter.second - 4) / 3 + 2;
            }
        }

        if (impossible_flag) return -1;
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> v = {
    2,3,3,2,2,4,2,3,4
  };

  cout << S.minOperations(v) << endl;

  return 0;
}
