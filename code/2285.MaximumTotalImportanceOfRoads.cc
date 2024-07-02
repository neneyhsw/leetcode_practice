#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<pair<int, int>> v(n);
        //for (auto road : roads) {
            //v[road[0]] = {};
            //v[road[1]]++;
        //}
        //sort()
        return 0;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<vector<int>> roads = {
    {0, 3}, {2, 4}, {1, 3}
  };
  int n = 5;

  cout << S.maximumImportance(n, roads) << endl;

  pair<int, int> p;
  p = {
    1, 0
  };
  p[1].second++;

  cout << p.first << ", " << p.second << endl;


  return 0;
}
