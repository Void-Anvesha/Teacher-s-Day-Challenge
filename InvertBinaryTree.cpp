class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //Base Case
        if(root==NULL) return NULL;

        //Swap the nodes
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
