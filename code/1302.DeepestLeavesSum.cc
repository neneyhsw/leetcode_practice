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
    int deepestLeavesSum(TreeNode* root) {
        int ans = 0, i = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (q.size()) {
            ans = 0;
            for (i = q.size()-1; i >= 0; i--) {
                TreeNode *node = q.front();
                q.pop();
                ans += node->val;
                if (node->right != nullptr) q.push(node->right);
                if (node->left != nullptr) q.push(node->left);
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  TreeNode *root = new TreeNode(1, new TreeNode(2), new TreeNode(3));

  cout << S.deepestLeavesSum(root) << endl;

  return 0;
}
