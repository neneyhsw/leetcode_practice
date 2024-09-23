#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_map<string, int> umap;
        string temp, remaining;
        
        remaining = s1;
        while (remaining.find(" ") != string::npos) {
            temp = remaining.substr(0, remaining.find(" "));
            umap[temp]++;
            remaining = remaining.substr(remaining.find(" ")+1);
        }
        umap[remaining]++;

        remaining = s2;
        while (remaining.find(" ") != string::npos) {
            temp = remaining.substr(0, remaining.find(" "));
            umap[temp]++;
            remaining = remaining.substr(remaining.find(" ")+1);
        }
        umap[remaining]++;

        for (auto iter = umap.begin(); iter != umap.end(); iter++) {
            if (iter->second == 1) {
                ans.push_back(iter->first);
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string s1 = "this apple is sweet";
  string s2 = "this apple is sour";

  vector<string> ans = S.uncommonFromSentences(s1, s2);
  for (string s : ans) {
    cout << s << ", ";
  }
  cout << endl;

  return 0;
}
