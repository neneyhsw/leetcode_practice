#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        for (int i = 1; i <= 9; i++) {
            int num = i;
            int nextDigit = i + 1;

            while (num <= high && nextDigit <= 9) {
                num = num * 10 + nextDigit;
                if (num >= low && num <= high) {
                    ans.push_back(num);
                }
                nextDigit++;
            }
        }
        sort(ans.begin(), ans.end());

        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  int low = 1000, high = 13000;

  //vector<int> ans = S.sequentialDigits(low, high);

  vector<int> t = S.sequentialDigits(low, high);


  for (int i : t) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
