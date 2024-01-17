#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> umap1;
        unordered_map<int, int> umap2;

        for (int i = 0; i < arr.size(); i++) {
            umap1[arr[i]]++;
        }
        for (auto iter : umap1) {
            if (umap2[iter.second] != 0) {
                return false;
            }
            umap2[iter.second]++;
        }
        return true;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> arr = {
    1,2,2,1,1,3
  };

  cout << S.uniqueOccurrences(arr) << endl;

  return 0;
}
