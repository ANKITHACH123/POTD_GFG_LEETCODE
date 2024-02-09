class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here
        if(root==NULL) return 1;
        if(root->left==NULL and root->right==NULL) return 1;
        int s=0;
        if(root->left!=NULL) s+=root->left->data;
        if(root->right!=NULL) s+=root->right->data;
        if(root->data==s and isSumProperty(root->left) and isSumProperty(root->right)) return 1;
    }
};
