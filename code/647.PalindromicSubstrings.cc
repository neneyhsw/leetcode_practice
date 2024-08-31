#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> all_subarr(string s) {
      vector<string> substrings;
      for (int start = 0; start < s.size(); ++start) {
        for (int end = start; end < s.size(); ++end) {
          string substring = s.substr(start, end - start + 1);
          substrings.push_back(substring);
        }
      }

      return substrings;
    }

    int countSubstrings(string s) {
        vector<string> subarr = all_subarr(s);
        int count = 0;
        bool flag = true;

        for (int i = 0; i < subarr.size(); i++) {
          int r = subarr[i].length() - 1, l = 0;
          flag = true;
          while (r > l) {
            if (subarr[i][r] != subarr[i][l]) {
              flag = false;
              break;
            }
            r--;
            l++;
          }
          if (flag) count++;
        }
        return count;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string s = "aaa";
  cout << S.countSubstrings(s) << endl;

  return 0;
}
