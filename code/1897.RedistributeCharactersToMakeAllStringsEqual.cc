#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> umap;

        // Record the number of each character
        for (string i : words) {
            for (char c : i) {
                umap[c]++;
            }
        }

        // If the mod of the number of character
        // is not equal to 0, it cannot make each string equal
        int num = words.size(); 
        for (auto iter : umap) {
            if (iter.second % num != 0) {
                return false;
            }
        }

        return true;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<string> words = {
    "abc","aabc","bc"
  };

  cout << S.makeEqual(words) << endl;

  return 0;
}
