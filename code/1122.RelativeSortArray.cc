#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {
                if (arr2[i] == arr1[j]) {
                    ans.push_back(arr1[j]);
                    arr1[j] = -1;
                }
            }
        }

        sort(arr1.begin(), arr1.end());
        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i] != -1) {
                ans.push_back(arr1[i]);
            }
        }
        return ans;
    }

};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> arr1 = {
    2,3,1,3,2,4,6,7,9,2,19
  };
  vector<int> arr2 = {
    2,1,4,3,9,6
  };

  vector<int> ans = S.relativeSortArray(arr1, arr2);
  for (auto i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
