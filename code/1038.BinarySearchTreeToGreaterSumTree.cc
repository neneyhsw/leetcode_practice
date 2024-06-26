#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int ans = 0;

    // right subtree is greater
    void inorder(TreeNode *node) {
        if (node == nullptr) return;
        inorder(node->right);
        ans += node->val;
        cout << ans << endl;
        node->val = ans;
        inorder(node->left);
        return;
    }

    TreeNode* bstToGst(TreeNode* root) {
        if (root == nullptr) return root;
        inorder(root);
        return root;
    }

    void PrintTreeValue(TreeNode *node) {
      if (node == nullptr) return;
      cout << node->val << ", ";
      PrintTreeValue(node->left);
      PrintTreeValue(node->right);
      return;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  TreeNode *root = new TreeNode(2, new TreeNode(1), new TreeNode(3));

  S.bstToGst(root);
  S.PrintTreeValue(root);

  return 0;
}
