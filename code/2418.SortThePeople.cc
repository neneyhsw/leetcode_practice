#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<int> names_index(n);
        vector<string> sorted_names;

        for (int i = 0; i < n; i++) {
            names_index[i] = i;
        }

        sort(names_index.begin(), names_index.end(), [&heights](int i, int j) {
            return heights[i] > heights[j];
        });

        for (int i = 0; i < n; i++) {
            sorted_names.push_back(names[names_index[i]]);
        }
        return sorted_names;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> heights = {
    180,165,170
  };
  vector<string> names = {
    "Mary","John","Emma"
  };

  vector<string> sorted_names = S.sortPeople(names, heights);
  for (auto i : sorted_names) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
