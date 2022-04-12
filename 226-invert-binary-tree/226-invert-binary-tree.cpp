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
    TreeNode* invertTree(TreeNode* root) {
        
        queue<TreeNode*> que;
        que.push(root);
        
        while(que.size() > 0){
            TreeNode* current = que.front();
            que.pop();
            if(current == NULL)
                continue;
            swap(current->left,current->right);
            que.push(current->left);
            que.push(current->right);
        }
        
        
        
//         if(root == NULL)
//             return NULL;
//         swap(root->left,root->right);
//         invertTree(root->left);
//         invertTree(root->right);
        
        return root;
        
        
        
    }
   
};