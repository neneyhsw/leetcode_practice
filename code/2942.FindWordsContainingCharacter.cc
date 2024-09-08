#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int i = 0;

        for (string s : words) {
            if (s.find(x) != string::npos) {
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<string> words = {
    {"abc", "bcd", "aaaa", "cbc"}
  };
  char x = 'a';
  vector<int> ans = S.findWordsContaining(words, x);

  for (int i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
