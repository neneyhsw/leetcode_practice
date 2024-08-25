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

    void dfs(TreeNode *root, int min_val, int max_val) {
        if (root == nullptr) return;

        ans = max(ans, max(abs(min_val - root->val), abs(max_val - root->val)));
        min_val = min(min_val, root->val);
        max_val = max(max_val, root->val);
        dfs(root->left, min_val, max_val);
        dfs(root->right, min_val, max_val);
        return;
    }

    int maxAncestorDiff(TreeNode* root) {
        if (root == nullptr) {
            return ans;
        }
        int min_val = root->val;
        int max_val = root->val;
        dfs(root, min_val, max_val);
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  TreeNode *root = new TreeNode(8, new TreeNode(5), new TreeNode(3));

  cout << S.maxAncestorDiff(root) << endl;

  return 0;
}
