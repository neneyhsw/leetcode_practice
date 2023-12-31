#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans = -1;
        int char_index = 0;
        int arr[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            char_index = s[i] - 'a';
            if (arr[char_index] != 0) {
                ans = max(ans, ((i + 1) - arr[char_index]) - 1);
            }
            else {
                arr[char_index] = i + 1;
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string s = "abca";

  cout << S.maxLengthBetweenEqualCharacters(s) << endl;

  return 0;
}
