#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int s = grid.size() - 2;
        vector<vector<int>> ans(s, vector<int>(s, 0));

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                int local_max = 0;
                for (int k = i; k < i+3; k++) {
                    for (int l = j; l < j+3; l++) {
                        local_max = max(local_max, grid[k][l]);
                    }
                }

                // assign local max to ans
                ans[i][j] = local_max;
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<vector<int>> grid = {
    {
      9, 9, 8, 1
    },
    {
      5, 6, 2, 6
    },
    {
      8, 2, 6, 4
    },
    {
      6, 2, 2, 2
    }
  };

  vector<vector<int>> ans = S.largestLocal(grid);
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << ", ";
    }
    cout << endl;
  }

  return 0;
}
