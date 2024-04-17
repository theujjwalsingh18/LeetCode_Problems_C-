class Solution {
public:
    string result = "";
    void dfs(TreeNode* root, string cur) {
        if (!root) {
            return;
        }
        cur = char(root->val + 'a') + cur;
        if (!root->left && !root->right) {
            if (result == "" || result > cur) {
                result = cur;
            }
            return;
        }
        dfs(root->left, cur);
        dfs(root->right, cur);
    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");
        return result;
    }
};