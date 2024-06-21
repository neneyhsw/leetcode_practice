#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int max_num = 0;
        int prep_index = 0, next_index = minutes, other_sum = 0, secret_tech_sum = 0;
        for (int i = 0; i < minutes; i++) {
            secret_tech_sum += customers[i];
        }
        for (int i = minutes; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                other_sum += customers[i];
            }
        }
        max_num = secret_tech_sum + other_sum;

        while (next_index < customers.size()) {
            secret_tech_sum -= customers[prep_index];
            secret_tech_sum += customers[next_index];

            if (grumpy[prep_index] == 0) {
                other_sum += customers[prep_index];
            }
            if (grumpy[next_index] == 0) {
                other_sum -= customers[next_index];
            }
            
            max_num = max(max_num, secret_tech_sum + other_sum);
            prep_index++;
            next_index++;
        }

        return max_num;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> customers = {
    1,0,1,2,1,1,7,5
  };
  vector<int> grumpy = {
    0,1,0,1,0,1,0,1
  };
  int minutes = 3;

  int ans = S.maxSatisfied(customers, grumpy, minutes);
  cout << ans << endl;

  return 0;
}
