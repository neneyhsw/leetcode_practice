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
    vector<int> GetSequence(TreeNode *node) {
        vector<int> result;
        dfs(node, result);
        return result;
    }

    void dfs(TreeNode *node, vector<int> &result) {
        if (node == nullptr) {
            return;
        }
        if (node->left == nullptr && node->right == nullptr) {
            result.push_back(node->val);
            return;
        }
        dfs(node->left, result);
        dfs(node->right, result);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1 = GetSequence(root1);
        vector<int> v2 = GetSequence(root2);

        if (v1.size() != v2.size()) return false;

        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] != v2[i]) return false;
        }
        return true;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  TreeNode *root1 = new TreeNode(8, new TreeNode(5), new TreeNode(3));
  TreeNode *root2 = new TreeNode(16, new TreeNode(5), new TreeNode(3));

  cout << S.leafSimilar(root1, root2) << endl;

  return 0;
}
