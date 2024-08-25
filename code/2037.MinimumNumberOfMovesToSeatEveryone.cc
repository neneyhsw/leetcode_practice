#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int ans = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for (int i = 0; i < seats.size(); i++) {
            ans += abs(seats[i] - students[i]);
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> seats = {
    4,1,5,9
  };
  vector<int> students = {
    1,3,2,6
  };

  int ans = S.minMovesToSeat(seats, students);
  cout << ans << endl;

  return 0;
}
