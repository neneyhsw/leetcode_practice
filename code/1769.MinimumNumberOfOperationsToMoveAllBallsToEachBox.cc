#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        int temp = 0;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            temp = 0;
            for (int j = 0; j < n; j++) {
                if (boxes[j] != '0') {
                    temp += abs(j - i);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  string boxes = "110";

  vector<int> ans = S.minOperations(boxes);
  for (auto i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
