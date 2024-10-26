#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minLength(string s) {
        int ans = s.length();
        int idx1 = 0, idx2 = 0;

        while(1) {
          idx1 = s.find("AB");
          idx2 = s.find("CD");
          if (idx1 == string::npos && idx2 == string::npos) {
            break;
          }
          if (idx1 != string::npos) {
            s.erase(idx1, 2);
          } else if (idx2 != string::npos) {
            s.erase(idx2, 2);
          }
          ans -= 2;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string s = "ABFCACDB";
  
  cout << S.minLength(s) << endl;

  return 0;
}
