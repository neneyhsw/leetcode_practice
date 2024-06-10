#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> unmap_s, unmap_t;
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            unmap_s[s[i]] = i;
            unmap_t[t[i]] = i;
        }
        for (int i = 0; i < s.length(); i++) {
            ans += abs(unmap_s[s[i]] - unmap_t[s[i]]);
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string s = "abcde", t = "edbac";

  cout << S.findPermutationDifference(s, t) << endl;
  return 0;
}
