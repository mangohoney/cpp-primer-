class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = this->right = 0;
    }
};

void reverseTree(TreeNode *root)
{
    if (root == 0)
    {
        return;
    }

    TreeNode *temp = root->right;
    root->right = root->left;
    root->left = temp;

    reverseTree(root->left);

    reverseTree(root->right);
}

        TreeNode *temp = root -> right;
        root -> right = root -> left;
        root -> left = temp;
        if (root -> left != 0)
        invertBinaryTree(root -> left);
        if (root -> right != 0)
        invertBinaryTree(root -> right);
