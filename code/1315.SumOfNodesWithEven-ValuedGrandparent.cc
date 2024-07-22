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

TreeNode* createTree() {
    TreeNode* node14 = new TreeNode(5);
    TreeNode* node12 = new TreeNode(4);
    TreeNode* node11 = new TreeNode(1);
    TreeNode* node7 = new TreeNode(9);
    TreeNode* node6 = new TreeNode(3);
    TreeNode* node5 = new TreeNode(1);
    TreeNode* node4 = new TreeNode(7, node11, node12);
    TreeNode* node3 = new TreeNode(8, node6, node14);
    TreeNode* node2 = new TreeNode(2, node7, nullptr);
    TreeNode* root = new TreeNode(6, node2, node3);
    root->left->right = node4;
    root->left->left = node2;
    root->right = node3;
    return root;
}

class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        int ans = 0;
        vector<bool> layers;
        queue<TreeNode*> q;

        q.push(root);
        while (!q.empty()) {
          int q_size = q.size();
        }

        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  TreeNode* root = createTree();

  return 0;
}
