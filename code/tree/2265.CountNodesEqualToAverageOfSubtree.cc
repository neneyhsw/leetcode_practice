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
    int dfs(TreeNode *node, int *count) {
        if (node == nullptr) return 0;
        
        int pre_sum_left = 0, pre_sum_right = 0;
        int count_left = 0, count_right = 0;
        pre_sum_left = dfs(node->left, &count_left);
        pre_sum_right = dfs(node->right, &count_right);
        *count += count_left + count_right + 1;
        int cur_sum = pre_sum_left + pre_sum_right + node->val;
        if (cur_sum / *count == node->val) {
            ans++;
        }
        return node->val + pre_sum_left + pre_sum_right;
    }

    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        int temp = dfs(root, &count);
        return ans;
    }
};

int main(int argc, char *argv[]) {
  Solution S;
  TreeNode *root = new TreeNode(1, new TreeNode(2), new TreeNode(3, new TreeNode(4), new TreeNode(5)));

  cout << S.averageOfSubtree(root) << endl;

  return 0;
}
