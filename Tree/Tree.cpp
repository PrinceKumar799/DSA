#include<iostream>
#include<queue>
#include<map>
#include<stack>
#include<vector>

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
        this->right=NULL;
    }
};

//build method to create
Node* build(Node* root)
{
    int data;
    cout<<"\nEnter Data: ";
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    root = new Node(data);
    cout<<"Data to put on the left of"<<data<<": ";
    root->left = build(root->left);
    cout<<"Data to put on the right of"<<data<<": ";
    root->right = build(root->right);
    return root;
}

//count total number of nodes in the tree
int countNode(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftCount = countNode(root->left);
    int rightCount = countNode(root->right);
    return 1+leftCount+rightCount;
}

//count total number of internal nodes in the tree
int internalNode(Node* root)
{
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    int leftinternal= internalNode(root->left);
    int  rightinternal = internalNode(root->right);
    return 1+leftinternal + rightinternal;
}

//count the total number of external nodes in the tree
int externalNode(Node* root)
{
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    int leftexternal= externalNode(root->left);
    int  rightexternal = externalNode(root->right);
    return leftexternal + rightexternal;
}

//print preorder of the given tree
void preOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<" "<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
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

//recursive Inorder Traversal
void inOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<" "<<root->data<<" ";
    inOrder(root->right);
}

//recursive PostOrder
void postOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<" "<<root->data<<" ";
}

//level order traversal printer level wise
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

//check whether the entered tree is BST
bool isBST(Node* root,int min, int max)
{
    if(root==NULL)
        return true;
    if(root->data > max || root->data < min)
    {
        return false;
    }
    return isBST(root->left,min,root->data) && isBST(root->right,root->data,max);
}

//levelWise zig zag traversal
void zigZagTraversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        int size=q.size();
        vector<int> ans(size);
        bool leftToRight = true;
        for(int i=0;i<size;i++)
        {
            Node* temp= q.front();
            q.pop();
            int index = leftToRight ? i : size-i-1;
            ans[index]=temp->data;
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
        leftToRight = !leftToRight;
        for(auto i: ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}

//vertical traversal
void verticalTraversal(Node* root)
{
    if(!root)
        return;
    map<int,map<int,vector<int>>> m;
    queue<pair<Node*,pair<int,int>>> q;
    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty())
    {
        pair<Node*,pair<int,int>> temp = q.front();
        q.pop();
        Node* frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;
        m[hd][lvl].push_back(frontNode->data);
        if(frontNode->left)
            q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
        if(frontNode->right)
            q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
    }

    for(auto i: m)
    {
        for(auto j: i.second)
        {
            for(auto k: j.second)
            {
                cout<<k<<" ";
            }
        }
    }
}

//left view of the tree
void leftView(Node* root)
{
    if(root==NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            Node* temp = q.front();
            q.pop();
            if(i==0)
                cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    
}

//right view of the tree
void rightView(Node* root)
{
    if(root==NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            Node* temp = q.front();
            q.pop();
            if(i==size-1)
                cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

//top view of the tree
void topView(Node* root)
{
    if(!root)
        return;
    map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            pair<Node*,int> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second;
            if(m.find(hd)==m.end())
            {
                m[hd] = frontNode->data;
            }
            if(frontNode->left)
                q.push(make_pair(frontNode->left,hd-1));
            if(frontNode->right)
                q.push(make_pair(frontNode->right,hd+1));
        }
    }

    for(auto i: m)
    {
        cout<<i.second<<" ";
    }
}

//bottom view of the tree
void bottomView(Node* root)
{
    if(!root)
        return;
    map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            pair<Node*,int> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second;
            m[hd] = frontNode->data;
            if(frontNode->left)
                q.push(make_pair(frontNode->left,hd-1));
            if(frontNode->right)
                q.push(make_pair(frontNode->right,hd+1));
        }
    }
}

int height(Node* root) 
{
    if(root==NULL)
        return 0;
    return 1+ max(height(root->left),height(root->right));
}

Node* lowestCommonAncestor(Node* root ,int n1 ,int n2 )
{
    if(!root)
        return NULL;
    if(root->data==n1 || root->data==n2)
    {
        return root;
    }
    Node* leftAns = lowestCommonAncestor(root->left,n1,n2);
    Node* rightAns = lowestCommonAncestor(root->right,n1,n2);
    
    if(leftAns!=NULL&&rightAns!=NULL)
        return root;
    else if(leftAns!=NULL && rightAns==NULL)
        return leftAns;
    else if(rightAns!=NULL && leftAns==NULL)
        return rightAns;
    else 
        return NULL;
}
Node* buildFromPreorderInorder(Node* root,int inOrder[], int preorder[],int index,int start,int end)
{
    if(start>end)
    {
        return NULL;
    }
    int posInInorder=-1;
    int preOrderVal = preorder[start];
    for(int i=0;i<end;i++)
    {
        if(preOrderVal==inOrder[i]);
        {
            posInInorder=i;
            break;
        }
    }
    if(posInInorder==-1)
    {
        return NULL;
    }
    root = new Node(inOrder[posInInorder]);
    root->left = buildFromPreorderInorder(root->left,inOrder,preorder,start,posInInorder-1);
    root->right = buildFromPreorderInorder(root->right,inOrder,preorder,posInInorder+1,end);
    return root;
}

int main()
{
    int preOrder[] = {3,9,20,15,7};
    int inOrder[] = {9,3,15,20,7};
    Node* root = NULL;
    root = buildFromPreorderInorder(root,inOrder,preOrder,0,0,sizeof(preOrder)/sizeof(preOrder[0]));
    postOrder(root);
}

// int main()
// {
//     int choice;
//     Node *root = NULL;
//     root = build(root);
//     cout<<"1. Count Total Nodes\n2. Count Internal Nodes\n3. Count External Nodes\n4. Recursive Preorder \n5. Iterative Preorder ";
//     cout<<"\n6. Inorder Traversal\n7. Postorder Traversal\n8. Level order traversal levelwise\n9. Check BST \n10. Zig Zag Traversal";
//     cout<<"\n11. vertical Traversal\n12. Left view of the tree\n13. Right view of the tree\n14. Top view of the tree\n15. Bottom view of the tree";
//     cout<<"\n16. Height of the tree\n17. Lowest common ancestor";
//     cout<<"\nEnter the operation to perform: ";
//     cin>>choice;
//     switch (choice)
//     {
//     case 1:
//         cout<<"Total Nodes: "<<countNode(root);
//         break;
//     case 2:
//         cout<<"Total Internal Nodes: "<<internalNode(root);
//         break;
//     case 3:
//         cout<<"Total External Nodes: "<<internalNode(root);
//         break;
//     case 4:
//         preOrder(root);
//         break;
//     case 5:
//         iterativePreorder(root);
//         break;
//     case 6:
//         inOrder(root);
//         break;
//     case 7:
//         postOrder(root);
//         break;
//     case 8:
//         levelOrderTraversalLevelwise(root);
//         break;
//     case 9:
//         cout<<"BST: "<<isBST(root,INT_MIN,INT_MAX);
//         break;
//     case 10:
//         zigZagTraversal(root);
//         break;
//     case 11:
//         verticalTraversal(root); 
//         break;
//     case 12:
//         leftView(root);
//         break;
//     case 13:
//         rightView(root);
//         break;
//     case 14:
//         topView(root);
//         break;
//     case 15:
//         bottomView(root);
//         break;
//     case 16:
//         cout<<"Height: "<<height(root);
//         break;
//     case 17:
//         {
//             int n1,n2;
//             cout<<"\nEnter two numbers to find lowest common ancestor: ";
//             cin>>n1>>n2;
//             Node* lca = lowestCommonAncestor(root,n1,n2);
//             if(lca)
//                 cout<<"Lowest common ancestor is: "<<lca->data<<endl;
//             else
//                 cout<<"INVALID"<<endl;
//         }
//     default:
//         break;
//     }
//     return 0;
// }

