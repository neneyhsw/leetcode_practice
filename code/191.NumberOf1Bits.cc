#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> bs(n);
        return bs.count();
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  int n = 11;

  // n = 1101
  cout << S.hammingWeight(n) << endl;

  return 0;
}
