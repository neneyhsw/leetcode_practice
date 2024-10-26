#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int rank_number = 1;
        set<int> st(arr.begin(), arr.end());
        unordered_map<int, int> umap;

        for (int i : st) {
          umap[i] = rank_number;
          rank_number++;
        }

        for (int i = 0; i < arr.size(); i++) {
          arr[i] = umap[arr[i]];
        }

        return arr;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> arr = {
    40,10,20,30
  };
  
  vector<int> ans = S.arrayRankTransform(arr);
  for (int i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
