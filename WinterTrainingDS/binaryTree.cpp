#include<bits/stdc++.h>
using namespace std;
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int data)
//     {
//         data = this->data;
//         left = NULL;
//         right = NULL;
//     }
// }
// class BinaryTree
// {
//     public:
//     Node* root;
//     BinaryTree()
//     {
//         root = NULL;
//     }
//     void buildTree(int data);
//     int heightOfTree();
// }
// void BinaryTree:: buildTree(int data)
// {
//     Node* temp = root;
//     if(temp==NULL)
//     {
//         temp = new Node(data);
//     }
//     else
//     {
//         while (temp)
//         {
//             if(temp->left==NULL)
//             {
//                 temp->left = new Node(data);
//                 break;
//             }
//             else
//             {
//                 temp->right = new Node(data);
//                 break;
//             }
//         }
        
//     }
// }

// int BinaryTree:: heightOfTree()
// {
//     int height = 0;
//     // if(root->left==NULL && root->right==NULL)
//     // {
//     //     return 0;
//     // }
//     // return 1 + heightOfTree(root->left) + heightOfTree(root->right);
//     while (root->left!=NULL && root->right!=NULL)
//     {
//         if(root->left!=NULL)
//         {
//             height++;
//         }
//         else if(root->right != NULL)
//         {
//             height++;
//         }
        
//     }
    
// }

// int main()
// {
//     BinaryTree bt;
//     bt.buildTree(1);
//     bt.buildTree(2);
//     bt.buildTree(3);
//     cout<<bt.heightOfTree()<<endl;
// }

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data)
        {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* buildTree(Node* root)
{
    cout<<"Enter the data: ";
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root = new Node(data);
    cout<<"Enter the data to put in the left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data to put in the right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
int heightOfTree(Node* root)
{
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    return 1 + heightOfTree(root->left) + heightOfTree(root->right);
}
void inorderSolve(Node* root,vector<int> &inorder)
{
    if(root)
    {
        inorderSolve(root->left,inorder);
        inorder.push_back(root->data);
        inorderSolve(root->right,inorder);
    }
    else
    return;
}
class LLNode
{
    int data;
    LLNode* next;
    LLNode* prev;
    LLNode(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void createNode(LLNode head,int data)
{
    LLNode temp = head;
    if(head==NULL)
    {
        head->data = new LLNode(data);
    }
    while (/* condition */)
    {
        /* code */
    }
    
}

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    cout<<heightOfTree(root);
    vector<int> inorder;
    inorderSolve(root,inorder);
    for
}

