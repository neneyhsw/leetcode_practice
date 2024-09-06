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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;
        }
        
        ListNode *pre = head;
        while (umap.find(pre->val) != umap.end()) {
            pre = pre->next;
            head = pre;
        }
        ListNode *cur = pre->next;
        while (cur != nullptr) {
            if (umap.find(cur->val) != umap.end()) {
                pre->next = cur->next;
            } else {
                pre = cur;
            }
            cur = cur->next;
        }
        return head;
    }
};

int main(int argc, char *argv[]) {
  Solution S;

  vector<int> nums = {1, 2, 3};
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  ListNode *ans = S.modifiedList(nums, head);
  while (ans != nullptr) {
    cout << ans->val << ", ";
    ans = ans->next;
  }
  cout << endl;

  return 0;
}
