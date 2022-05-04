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
        vector<vector<int>> ans;
        vector<int> cur_node;
        queue<TreeNode*> que;
        if(root!=NULL){
            que.push(root);
            que.push(NULL);
        }
        
        while(!que.empty()){
            TreeNode* curr = que.front();
            que.pop();
            
            if(curr == NULL){
                ans.push_back(cur_node);
                cur_node.resize(0);
                if(que.size() > 0)
                    que.push(NULL);
            }
            // cout<<curr->val<<" ";
            
            else{
                cur_node.push_back(curr->val);
                
                if(curr->left!=NULL)     
                que.push(curr->left);
    
                if(curr->right!=NULL)
                    que.push(curr->right);
            }
           
        }
        
        return ans;
    }
};