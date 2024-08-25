#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        int row_max = 0, col_max = 0, temp = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                row_max = 0;
                col_max = 0;
                temp = 0;
                for (int k = 0; k < n; k++) {
                    row_max = max(row_max, grid[i][k]);
                    col_max = max(col_max, grid[k][j]);
                }
                temp = min(row_max, col_max);
                ans += temp - grid[i][j];
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<vector<int>> grid = {
    {3,0,8,4},
    {2,4,5,7},
    {9,2,6,3},
    {0,3,1,0}
  };

  cout << S.maxIncreaseKeepingSkyline(grid) << endl;

  return 0;
}
