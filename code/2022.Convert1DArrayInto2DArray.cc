#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        int count = 0;
        if (m * n != original.size()) {
            return ans;
        }
        for (int i = 0; i < m; i++) {
            vector<int> temp;
            for (int j = 0; j < n; j++) {
                temp.push_back(original[count]);
                count++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> v = {
    1, 2, 3, 4
  };
  int m = 2, n = 2;

  vector<vector<int>> ans = S.construct2DArray(v, m, n);
  for (auto i : ans) {
    for (auto j : i) {
      cout << j << ", ";
    }
    cout << endl;
  }

  return 0;
}
