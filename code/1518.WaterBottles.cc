#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = 0;
        int remain_bottles = 0;
        while ((numBottles+remain_bottles) >= numExchange) {
            ans += numBottles;
            remain_bottles += numBottles;
            numBottles = remain_bottles / numExchange;
            remain_bottles %= numExchange;
        }
        ans += numBottles;
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  int numBottles = 15;
  int numExchange = 4;

  cout << S.numWaterBottles(numBottles, numExchange) << endl;

  return 0;
}
