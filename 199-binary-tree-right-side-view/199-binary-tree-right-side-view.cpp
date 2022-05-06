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
    vector<int> rightSideView(TreeNode* root) {
       queue<TreeNode*> que;
       que.push(root);
       que.push(NULL);
       vector<int> ans;
       int flag = 0;
       
       if(root == NULL)
           return ans;

       while(que.size()>1){
           TreeNode* cur = que.front();
           que.pop();

           if(flag ==0 && cur!=NULL){
            ans.push_back(cur->val);
               flag =1;
           }

            else if(cur == NULL) {
                flag =0;
                que.push(NULL);
                continue;
            }

           
            if(cur->right!=NULL)
                que.push(cur->right);
            if(cur->left!=NULL)
                que.push(cur->left);
       }
        
       return ans;
    }
};