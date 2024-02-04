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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if (list1 == nullptr) return list2;
      if (list2 == nullptr) return list1;

      ListNode *head = list1;
      if (list1->val < list2->val) {
        head = list2;
        list2 = list2->next;
      } else {
        list1 = list1->next;
      }

      ListNode *current = head;
      while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
          current->next = list1;
          list1 = list1->next;
        } else {
          current->next = list2;
          list2 = list2->next;
        }
        current = current->next;
      }

      if (list1 == nullptr) {
        current->next = list2;
      } else {
        current->next = list1;
      }

      return head;
    }
};

int main(int argc, char *argv[]) {
  Solution S;

  ListNode* list1 = new ListNode(1);
  list1->next = new ListNode(2);
  list1->next->next = new ListNode(4);

  ListNode* list2 = new ListNode(1);
  list2->next = new ListNode(3);
  list2->next->next = new ListNode(4);

  ListNode *head = S.mergeTwoLists(list1, list2);
  while (head != nullptr) {
    cout << head->val << ", ";
    head = head->next;
  }
  cout << endl;

  return 0;
}
