#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        unordered_map<char, int> umap = {
          {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
          {'C', 100}, {'D', 500}, {'M', 1000} 
        };

        for (int i = 0; i < s.length(); i++) {
          if (i < s.length() - 1) {
            if (s[i] == 'I') {
              if (s[i+1] == 'V' || s[i+1] == 'X') {
                ans += (umap[s[i+1]]-umap[s[i]]);
                i++;
              } else {
                ans += umap[s[i]];
              }
            } else if (s[i] == 'X') {
              if (s[i+1] == 'L' || s[i+1] == 'C') {
                ans += (umap[s[i+1]]-umap[s[i]]);
                i++;
              } else {
                ans += umap[s[i]];
              }
            } else if (s[i] == 'C') {
              if (s[i+1] == 'D' || s[i+1] == 'M') {
                ans += (umap[s[i+1]]-umap[s[i]]);
                i++;
              } else {
                ans += umap[s[i]];
              }
            } else {
              ans += umap[s[i]];
            }
          } else {
            ans += umap[s[i]];
          }
        }

        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string s = "LVIII";
  cout << S.romanToInt(s) << endl;

  return 0;
}
