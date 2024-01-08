class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==nullptr) return 0;
        else{
            if(root->val>=low and root->val<=high){
                return root->val+rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
            }
            else if(root->val>=low){
                return rangeSumBST(root->left,low,high);
            }
            else{
                return rangeSumBST(root->right,low,high);
            }
        }
    }
};