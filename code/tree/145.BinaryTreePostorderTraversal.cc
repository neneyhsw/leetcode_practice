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
    vector<int> ans;
    void postorder(TreeNode *root) {
        if (root == nullptr) return;
        postorder(root->left);
        postorder(root->right);
        ans.push_back(root->val);
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  TreeNode *root = new TreeNode(1, new TreeNode(2), new TreeNode(3));

  vector<int> ans = S.postorderTraversal(root);
  for (int i : ans) {
    cout << i << ", ";
  }
  cout << endl;

  return 0;
}
