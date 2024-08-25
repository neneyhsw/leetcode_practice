#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        int PreXor = 0;
        int Temp = 0;

        if (pref.size() == 1) return pref;

        ans.push_back(pref[0]);
        PreXor = pref[0];
        for (int i = 1; i < pref.size(); i++) {
          Temp = PreXor ^ pref[i];
          ans.push_back(Temp);
          PreXor ^= Temp;
        }
        
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> v = {
    5,2,0,3,1
  };

  vector<int> ans = S.findArray(v);
  for (int i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
