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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int count = 0, prep = 0, temp = 0;
        vector<int> temp_v;

        while (head != nullptr) {
            count++;
            if (prep == 0) {
                prep = head->val;
                head = head->next;
                continue;
            }

            if (head->next != nullptr) {
                if (head->val < prep) {
                    if (head->val < head->next->val) {
                        temp_v.push_back(count);
                    }
                } else if (head->val > prep) {
                    if (head->val > head->next->val) {
                        temp_v.push_back(count);
                    }
                }
            }

            prep = head->val;
            head = head->next;
        }

        if (count < 3 || temp_v.size() < 2) return vector<int> {-1, -1};

        int min_dist = INT_MAX;
        int max_dist = temp_v[temp_v.size()-1] - temp_v[0];
        for (int i = 1; i < temp_v.size(); i++) {
            min_dist = min(min_dist, temp_v[i]-temp_v[i-1]);
        }

        vector<int> ans = {min_dist, max_dist};
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;

  ListNode* head = new ListNode(5, new ListNode(3, new ListNode(1, new ListNode(2, new ListNode(5, new ListNode(1, new ListNode(2)))))));


  vector<int> ans = S.nodesBetweenCriticalPoints(head);
  for (auto i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
