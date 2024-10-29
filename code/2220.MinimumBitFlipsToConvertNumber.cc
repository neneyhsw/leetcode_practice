#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int i = 0, ans = 0, a, b;
        for (i = 0; i < 32; i++) {
          a = (start & (1u << i)) ? 1 : 0;
          b = (goal & (1u << i)) ? 1 : 0;
          if (a ^ b == 1) {
            ans++;
          }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  int start = 10, goal = 7;

  cout << S.minBitFlips(start, goal) << endl;

  return 0;
}
