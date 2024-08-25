#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;

        for (auto query : queries) {
            int count = 0;
            int limit = query[2] * query[2];
            for (auto point : points) {
                if ((query[0]-point[0])*(query[0]-point[0]) + (query[1]-point[1])*(query[1]-point[1]) <= limit) {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<vector<int>> points = {
    {1, 3}, {3, 3}, {5, 3}, {2, 2}
  };
  vector<vector<int>> queries = {
    {2, 3, 1}, {4, 3, 1}, {1, 1, 2}
  };
  
  vector<int> ans = S.countPoints(points, queries);
  for (auto i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
