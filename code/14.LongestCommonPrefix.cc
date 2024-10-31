#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        char temp;
        int min_len = 200;
        int count = 0;
        bool flag = false;
        int i, j;

        for (string s : strs) {
          min_len = min(min_len, (int)s.length());
          count++;
        }
        for (i = 0; i < min_len; i++) {
          for (j = 0; j < count; j++) {
            if (j == 0) {
              temp = strs[j][i];
              continue;
            }
            if (temp != strs[j][i]) {
              flag = true;
            }
          }
          if (flag == true) {
            break;
          }
          ans += strs[j-1][i];
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<string> vs = {
    "flower","flow","flight"
  };
  cout << S.longestCommonPrefix(vs) << endl;

  return 0;
}
