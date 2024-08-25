#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int ans = 0;
        if (n == 1) return ans;
        while (n > 1) { 
            if (n%2 == 0) {
                ans += n / 2;
                n /= 2;
            } else {
                ans += n / 2;
                n = n / 2 + 1;
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  int n = 7;

  cout << S.numberOfMatches(n) << endl;

  return 0;
}
