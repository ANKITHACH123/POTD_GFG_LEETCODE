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
void in(TreeNode* root,vector<int>&v){
    if(root==NULL)return;
    if(root->left==NULL and root->right==NULL){
            v.push_back(root->val);
            return;
    }
    in(root->left,v);
    in(root->right,v);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        vector<int>v1;
        in(root1,v);
        in(root2,v1);
        int c=0;
        if(v.size()!=v1.size()){
            return false;
        }
        else{
            for(int i=0;i<v.size();i++){
                if(v[i]==v1[i])c+=1;
                //cout<<c<<" ";
            }
        }
        if(c==v.size())return true;
        else return false;
    }
};