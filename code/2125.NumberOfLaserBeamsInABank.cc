#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int pre_count = 0;
        int cur_count = 0;

        for (string s : bank) {
            cur_count = 0;
            for (char c : s) {
                if (c == '1') {
                    cur_count++;
                }
            }
            if (cur_count == 0) continue;
            else {
                ans += (pre_count * cur_count);
            }
            pre_count = cur_count;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<string> v = {
    "011001","000000","010100","001000"
  };

  cout << S.numberOfBeams(v) << endl;

  return 0;
}
