#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1, s2;
        for (string s : word1) {
            s1 += s;
        }
        for (string s : word2) {
            s2 += s;
        }
        if (s1 != s2) return false;
        return true;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<string> word1 = {"a", "cb"};
  vector<string> word2 = {"ab", "c"};

  cout << S.arrayStringsAreEqual(word1, word2) << endl;
  return 0;
}
