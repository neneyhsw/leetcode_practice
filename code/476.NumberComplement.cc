#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        uint32_t bit_count = 0;
        int temp = num;
        while (temp > 0) {
          bit_count++;
          temp >>= 1;
        }
        uint32_t mask = (1U << bit_count) - 1;
        return ~num & mask;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  int num = 5;

  cout << S.findComplement(num) << endl;

  return 0;
}
