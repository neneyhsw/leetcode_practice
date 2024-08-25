#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        int ans = 1;
        bool f = true;
        for (int i = 1; i <= time; i++) {
            if (f) ans++;
            else ans--;
            if (i % (n-1) == 0) f = !f;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  int n = 4;
  int time = 5;

  cout << S.passThePillow(n, time) << endl;

  return 0;
}
