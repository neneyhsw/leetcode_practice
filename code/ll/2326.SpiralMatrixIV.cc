#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));
        int i = 0, j = 0, direction = 0, bound = 0;

        // direction 0, 1, 2, 3 are right, down, left, and up, respectively.
        while (head != nullptr) {
            ans[i][j] = head->val;
            if (direction == 0) {
                if (j == n - bound - 1) {
                    direction = 1;
                    i++;
                } else {
                    j++;
                }
            } else if (direction == 1) {
                if (i == m - bound - 1) {
                    direction = 2;
                    j--;
                } else {
                    i++;
                }
            } else if (direction == 2) {
                if (j == 0 + bound) {
                    direction = 3;
                    i--;
                    bound++;
                } else {
                    j--;
                }
            } else if (direction == 3) {
                if (i == 0 + bound) {
                    direction = 0;
                    j++;
                } else {
                    i--;
                }
            }
            head = head->next;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;

  int m = 3, n = 5;
  vector<int> v = {0,2,6,8,1,7,9,4,2,5,5,0};
  ListNode *head = new ListNode(3);
  ListNode *curr = head;
  for (int i = 0; i < v.size(); i++) {
    curr->next = new ListNode(v[i]);
    curr = curr->next;
  }

  vector<vector<int>> ans = S.spiralMatrix(m, n, head);
  for (auto i : ans) {
    for (auto j : i) {
      cout << j << ", ";
    }
    cout << endl;
  }
  return 0;
}
