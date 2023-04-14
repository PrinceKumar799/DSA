#include <iostream>
#include<queue>
#include<stack>
using namespace std;

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
}f

//level order traversal is same as BFS
void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data;
            if (temp->left)
            {
                q.push(root->left);
            }
            if(temp->right)
            {
                q.push(root->right);
            }
        }
    }  
}


//preoreder traversal
void preorderTraversal(Node* root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}


//iterativ preorder traversal
void iterativePreorder(Node* root)
{
    if(!root)
        return;
    stack<Node*> st;
    st.push(root);
    while(!st.empty())
    {
        Node* temp = st.top();
        cout<<temp->data<<" ";
        st.pop();
        if(temp->right)
            st.push(temp->right);
        if(temp->left)
        st.push(temp->left);

    }
}


//Inorder traversal
void inorderTraversal(Node* root)
{
    if(root)
    {
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
    else
        return;
}

//postorder traversal
void postorderTraversal(Node* root)
{
    if(root)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";
    }
}

//reverse level order
void reverseLevelOrderTraversal(Node* root)
{
    queue<Node*> q;
    stack<Node*> st;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp==NULL)
        {
            st.push(NULL);
            if(!q.empty())
            {
                q.push(NULL);
            }

        }
        else
        {
            st.push(temp);
            if (temp->left)
            {
                q.push(root->left);
            }
            if(temp->right)
            {
                q.push(root->right);
            }
        }
    }
    while (!st.empty())
    {
        Node* temp = st.top();
        st.pop();
        cout<<temp->data<<" ";
    }

      
}

void levelOrderTraversalLevelwise(Node* root)
{
    if(root==NULL)
    return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            Node* front = q.front();
            q.pop();
            cout<<front->data<<" ";
            if(front->left)
            q.push(front->left);
            if(front->right)
            q.push(front->right);
        }
        cout<<endl;
    }
}


int main()
{
    Node* root=NULL;
    root = buildTree(root);
    // cout<<"\nLEVEL ORDER"<<endl;
    // levelOrderTraversal(root);
    // cout<<"\nPRE ORDER"<<endl;
    // preorderTraversal(root);
    // cout<<"\nPOST ORDER"<<endl;
    // postorderTraversal(root);
    // cout<<"\nINORDER"<<endl;
    // inorderTraversal(root);
    // // cout<<"REVERSE LEVEL ORDER"<<endl;
    // // reverseLevelOrderTraversal(root);
    // cout<<"\n ITERATIVE PREORDER"<<endl;
    // iterativePreorder(root);
    cout<<"\nLEVEL ORDER LEVELWISE"<<endl;
    levelOrderTraversalLevelwise(root);
    return 0;
}