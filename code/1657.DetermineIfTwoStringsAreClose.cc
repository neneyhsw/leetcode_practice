#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
      if (word1.length() != word2.length()) return false;

      vector<int> v1(26, 0);
      vector<int> v2(26, 0);
      for (int i = 0; i < word1.length(); i++) {
        v1[word1[i] - 'a']++;
        v2[word2[i] - 'a']++;
      }

      // Exam if two array contain same char at least once
      for (int i = 0; i < v1.size(); i++) {
        if ((v1[i] == 0 && v2[i] != 0) ||
            (v1[i] != 0 && v2[i] == 0)) {
          return false;
        }
      }

      // Exam if the count in two array is same
      sort(v1.begin(), v1.end());
      sort(v2.begin(), v2.end());
      for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
      }
      return true;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string word1 = "cabbba";
  string word2 = "abbccc";

  cout << S.closeStrings(word1, word2) << endl;

  return 0;
}
