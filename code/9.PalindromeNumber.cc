#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long int reversed = 0;
        long long int temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        
        if (reversed == x) return true;
        return false;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  int x = -121;

  cout << S.isPalindrome(x) << endl;

  return 0;
}
