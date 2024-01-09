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
    int gcd(int a, int b) {
        int temp = 0;
        
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        
        ListNode *current_node = head;
        int gcd_val = 0;
        while (current_node->next != nullptr) {
            gcd_val = gcd(current_node->val, current_node->next->val);

            // insert gcd node
            ListNode *new_node = new ListNode(gcd_val);
            new_node->next = current_node->next;
            current_node->next = new_node;
            current_node = new_node->next;
        }
        return head;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  ListNode *head = new ListNode(18, new ListNode(6, new ListNode(10, new ListNode(3))));

  head = S.insertGreatestCommonDivisors(head);

  while (head != nullptr) {
    cout << head->val << ", ";
    head = head->next;
  }
  cout << endl;

  return 0;
}
