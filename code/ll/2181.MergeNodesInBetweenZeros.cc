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
    ListNode* mergeNodes(ListNode* head) {
        int temp_val = 0;
        ListNode *cur = nullptr;
        ListNode *ans = nullptr;
        
        head = head->next;
        while (head != nullptr) {
            if (head->val == 0) {
                ListNode *temp_node = new ListNode(temp_val);
                if (ans == nullptr) {
                    cur = temp_node;
                    ans = cur;
                } else {
                    cur->next = temp_node;
                    cur = cur->next;
                }
                temp_val = 0;
            }
            temp_val += head->val;
            head = head->next;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  vector<int> v = {3, 1, 0, 4, 5, 2, 0};
  ListNode *cur = new ListNode(0);
  ListNode *head = cur;

  /* Initialize ListNode */
  for (int i = 0; i < v.size(); i++) {
    cur->next = new ListNode(v[i]);
    cur = cur->next;
  }

  ListNode *ans = S.mergeNodes(head);
  while (ans != nullptr) {
    cout << ans->val << ", ";
    ans = ans->next;
  }
  cout << endl;

  return 0;
}
