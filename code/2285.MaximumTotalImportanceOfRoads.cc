#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
      long long ans = 0;
      vector<int> v(n);

      for (vector<int> road : roads) {
        v[road[0]]++;
        v[road[1]]++;
      }

      vector<int> c(n);
      for (int i = 0; i < n; i++) {
        c[i] = i;
      }
      sort(c.begin(), c.end(), [&](int a, int b) {
        return v[a] > v[b];
      });

      //for (int i = 0; i < n; i++) {
      //  cout << "index " << i << ": " << v[i] << ", " << c[i] << endl;
      //}

      for (int i = 0; i < n; i++) {
        ans += (long long) (n - i) * v[c[i]];
      }
      return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  //vector<vector<int>> roads = {
  //  {0, 3}, {2, 4}, {1, 3}
  //};
  vector<vector<int>> roads = {
    {0, 1}, {1, 2}, {2, 3}, {0, 2}, {1, 3}, {2, 4}
  };
  int n = 5;

  cout << S.maximumImportance(n, roads) << endl;

  return 0;
}
