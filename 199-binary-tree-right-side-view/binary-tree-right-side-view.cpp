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

    void traverseNode(TreeNode* root, int lvl, vector<int> &sideview){
        if (root== NULL){
            return;
        } 

        if(sideview.size()== lvl){
            sideview.push_back(root->val);
        } 

        traverseNode(root->right, lvl+1, sideview);
        traverseNode(root->left, lvl+1, sideview);
    }

    vector<int> rightSideView(TreeNode* root) {
        //queue<int> q;
       //q.push(root);
        vector<int> sideview;
        int lvl =0;

        traverseNode(root, lvl, sideview);

        return sideview;
    }
};