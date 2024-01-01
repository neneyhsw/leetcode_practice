#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0, j = 0;
        int ans = 0;

        if (g.size() == 0 || s.size() == 0) {
            return ans;
        }

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while (i < s.size()) {
            if (j >= g.size()) {
                break;
            }
            if (s[i] >= g[j]) {
                ans++;
                j++;
            }
            i++;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> g = {
    10, 9, 7, 8
  };
  vector<int> s = {
    6, 5, 7, 8
  };

  cout << S.findContentChildren(g, s) << endl;

  return 0;
}
