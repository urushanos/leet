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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};
        vector<vector<int>> soln;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
           vector<int> lvl;

           int n = q.size();
           for(int i=0; i<n; i++){
            TreeNode* curr = q.front();
            q.pop();
            lvl.push_back(curr->val);
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
           }

           soln.push_back(lvl);
        }
        return soln;
    }
};