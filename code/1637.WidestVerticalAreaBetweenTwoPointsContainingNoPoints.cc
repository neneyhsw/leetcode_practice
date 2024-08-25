#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int ans = 0;

        sort(points.begin(), points.end());
        for (int i = 1; i < points.size(); i++) {
            ans = max(ans, points[i][0] - points[i-1][0]);
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<vector<int>> points = {
    {3,1},{9,0},{1,0},{1,4},{5,3},{8,8}
  };

  cout << S.maxWidthOfVerticalArea(points) << endl;

  return 0;
}
