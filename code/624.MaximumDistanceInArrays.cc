#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        if (arrays.size() < 2) return 0;

        int globalMin = arrays[0][0];
        int globalMax = arrays[0].back();
        int result = 0;

        for (int i = 1; i < arrays.size(); ++i) {
 
            int localMin = arrays[i][0];
            int localMax = arrays[i].back();

          
            result = max(result, max(localMax - globalMin, globalMax - localMin));

            globalMin = min(globalMin, localMin);
            globalMax = max(globalMax, localMax);
        }

        return result;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<vector<int>> v1 = {
    {1,2,3},
    {4,5},
    {1,2,3},
  };

  cout << S.maxDistance(v1) << endl;

  return 0;
}
