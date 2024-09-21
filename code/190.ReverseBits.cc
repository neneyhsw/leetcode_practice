#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i < 32; i++) {
            ans = (ans << 1) | (n & 1);
            n >>= 1;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  uint32_t n = 0b00000010100101000001111010011100;

  // ans = 964176192 (00111001011110000010100101000000)
  cout << S.reverseBits(n) << endl;

  return 0;
}
