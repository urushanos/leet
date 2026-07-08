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

    int maxLevelSum(TreeNode* root) {
        if (!root) return 0;
        
        queue<TreeNode*> q;
        q.push(root);

        int maxSum=INT_MIN;
        int maxlvl = 1, currlvl = 1;

        while(!q.empty()){
            int lvlSize = q.size();
            int lvlSum = 0;

            for(int i =0; i<lvlSize; i++){
                TreeNode* curr = q.front();
                q.pop();

                lvlSum += curr->val;

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

            if(lvlSum > maxSum){
                maxSum = lvlSum;
                maxlvl = currlvl;
            }
            currlvl++;
        }

        return maxlvl;
    }
};