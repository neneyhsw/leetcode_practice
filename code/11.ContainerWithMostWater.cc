#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
      int ans = 0;
      int i = 0, j = height.size() - 1;
      int x = 0, y = 0;

      while (i < j) {
        x = j - i;
        y = min (height[i], height[j]);
        ans = max (ans, x * y);

        if (height[i] < height[j]) {
          i++;
        } else {
          j--;
        }
      }

      return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> v {
    1,8,6,2,5,4,8,3,7
  };

  cout << S.maxArea(v) << endl;

  return 0;
}
