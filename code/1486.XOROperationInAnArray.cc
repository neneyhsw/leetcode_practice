#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start;
        for (int i = 1; i < n; i++) {
            ans ^= (start + 2 * i);
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  int n = 4;
  int start = 3;

  cout << S.xorOperation(n, start) << endl;

  return 0;
}
