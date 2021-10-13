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
//         int level=0;
//         vector<int>ans;
        
//         call(root,0,ans);
//         return ans;
//     }
    
//     void call(TreeNode* root,int level,vector<int>& ans)
//     {
//         if(root==NULL)
//             return;
        
//         if(ans.size()==level)
//             ans.push_back(root->val);
//         call(root->right,level+1,ans);
//         call(root->left,level+1,ans);
        vector<int>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int temp=0;
            int siz=q.size();
        for(int i=0;i<siz;i++)
        { 
            TreeNode* p=q.front();
            q.pop();
            if(p->left!=NULL) q.push(p->left);
            if(p->right!=NULL) q.push(p->right); 
            // cout<<p->val<<" ";
            temp=p->val;
        }
       ans.push_back(temp);
        }
        return ans;
    }
};