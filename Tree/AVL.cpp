
Node* insert(Node* root)
{

}

int height(Node* root)
{
    if(root==NULL)
        return 0;
    return 1+max(root->left,root->right);
}

bool isBalanced(Node* root)
{
    if(root==NULL)
    {
        return true;
    }
    bool left = isBalanced(root->left);
    bool right = isBalanced(roo->right);
    int BF = height(root->left) - height(root->);
    if(BF==-1||BF==0||BF==-1)
    {
        return 
    }
}