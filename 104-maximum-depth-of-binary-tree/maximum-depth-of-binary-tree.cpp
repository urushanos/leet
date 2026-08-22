/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxHeight=1;
    void currDepth(TreeNode* root, int h){
        if(root == NULL) return;

        maxHeight = max(maxHeight, h);
        currDepth(root->left, h+1);
        currDepth(root->right, h+1);

    }

    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;

        int h=1;
        currDepth(root, h);
        return maxHeight;
    }
};