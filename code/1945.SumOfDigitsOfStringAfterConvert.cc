#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        // convert and first transform
        int temp = 0, next_num = 0;
        for (int i = 0; i < s.length(); i++) {
            temp = s[i] - 'a' + 1;
            if (temp >= 10) {
                temp = ((temp%10) + (temp/10));
            }
            next_num += temp;
        }

        for (int i = 0; i < k - 1; i++) {
            if (next_num < 10) {
                break;
            }
            temp = next_num;
            next_num = 0;
            while (temp != 0) {
                next_num += temp % 10;
                temp /= 10;
            }
        }
        return next_num;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string s = "leetcode";
  int k = 2;

  cout << S.getLucky(s, k) << endl;

  return 0;
}
