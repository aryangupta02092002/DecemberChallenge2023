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
    string ans = "";
    string tree2str(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        ans += to_string(root->val);
        if(root->left){
            ans += "(";
            tree2str(root->left);
            ans += ")";
        }
        if(root->left && root->right){
            ans += "(";
            tree2str(root->right);
            ans += ")";
        }
        else if(root->right){
            ans += "()(";
            tree2str(root->right);
            ans += ")";
        }
        return ans;
    }
    
};
