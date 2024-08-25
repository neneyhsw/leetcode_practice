#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;
        int min_num = INT_MAX;

        for (int i = 0; i < nums2.size(); i++) {
            nums2[i] *= k;
            min_num = min(min_num, nums2[i]);
        }

        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] < min_num) continue;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i]%nums2[j] == 0) count++;
            }
        }

        return count;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums1 = {
    1,2,4,12
  };
  vector<int> nums2 = {
    2,4
  };
  int k = 3;

  cout << S.numberOfPairs(nums1, nums2, k) << endl;

  return 0;
}
