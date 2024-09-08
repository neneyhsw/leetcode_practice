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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count = 0;
        ListNode *curr = head;

        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }

        int split_size = 0, remaining = 0;
        split_size = count / k;
        remaining = count % k;

        vector<ListNode *> ans;
        curr = head;
        ListNode *prev = curr;

        for (int i = 0; i < k; i++) {
            ListNode *new_part = curr;
            int curr_size = split_size;
            if (remaining > 0) {
                remaining--;
                curr_size++;
            }

            int j = 0;
            while (j < curr_size) {
                prev = curr;
                if (curr != nullptr) {
                    curr = curr->next;
                }
                j++;
            }

            if (prev != nullptr) {
                prev->next = nullptr;
            }

            ans.push_back(new_part);
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;

  int k = 3;
  ListNode *head = new ListNode(1);
  ListNode *curr = head;
  for (int i = 2; i <= 10; i++) {
    curr->next = new ListNode(i);
    curr = curr->next;
  }

  vector<ListNode *> ans = S.splitListToParts(head, k);

  for (auto i : ans) {
    while (i != nullptr) {
      cout << i->val << ", ";
      i = i->next;
    }
    cout << endl;
  }

  return 0;
}
