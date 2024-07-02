#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R') {
                count++;
            } else {
                count--;
            }
            if (count == 0) {
                ans++;
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string s = "RLRRRLLRLL";

  cout << S.balancedStringSplit(s) << endl;

  return 0;
}
