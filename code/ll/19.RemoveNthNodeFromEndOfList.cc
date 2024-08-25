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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast, *slow;
        fast = head;
        slow = head;

        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }
        if (fast == nullptr) return head->next;

        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};

int main(int argc, char *argv[]) {
  Solution S;

  int n = 2;
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  ListNode *ans = S.removeNthFromEnd(head, n);
  while (ans != nullptr) {
    cout << ans->val << ", ";
    ans = ans->next;
  }
  cout << endl;

  return 0;
}
