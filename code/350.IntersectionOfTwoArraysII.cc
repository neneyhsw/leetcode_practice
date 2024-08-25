#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> ans;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> nums1 = {
    1,2,2,1
  };
  vector<int> nums2 = {
    2,2
  };

  vector<int> ans = S.intersect(nums1, nums2);
  for (int i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
