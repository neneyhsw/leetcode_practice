#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> seq = heights;
        int ans = 0;

        sort(seq.begin(), seq.end());
        for (int i = 0; i < seq.size(); i++) {
            if (heights[i] != seq[i]) {
                ans++;
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> heights = {
    1,1,4,2,1,3
  };

  cout << S.heightChecker(heights) << endl;
  return 0;
}
