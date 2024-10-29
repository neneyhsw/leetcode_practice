#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        bool is_allowed = true;
        unordered_map<char, int> umap;

        for (int i = 0; i < allowed.length(); i++) {
          umap[allowed[i]]++;
        }

        for (string s : words) {
          is_allowed = true;
          for (char c : s) {
            if (umap.find(c) == umap.end()) {
              is_allowed = false;
              break;
            }
          }
          if (is_allowed) {
            ans++;
          }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string allowed = "ab";
  vector<string> words = {
    "ad","bd","aaab","baa","badab"
  };

  cout << S.countConsistentStrings(allowed, words) << endl;

  return 0;
}
