#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != std::string::npos) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<string> words = {
    "abc","bcd","aaaa","cbc"
  };
  char x = 'c';

  vector<int> ans = S.findWordsContaining(words, x);
  for (auto i : ans) {
    cout << i << ", ";
  }
  cout << endl;


  return 0;
}
