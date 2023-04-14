#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertNode(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    if (data < root->data)
        root->left = insertNode(root->left, data);
    if (data > root->data)
        root->right = insertNode(root->right, data);
    return root;
}

bool search(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
    return false;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Node *max(Node *root)
{
    if (root == NULL)
        return NULL;
    if (root->right == NULL)
    {
        return root;
    }
    return max(root->right);
}

Node *min(Node *root)
{
    if (root == NULL)
        return NULL;
    if (root->left == NULL)
    {
        return root;
    }
    return min(root->left);
}

Node *deleteNode(Node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child
        else if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        else
        {
            root->data = max(root->left)->data;
            root->left = deleteNode(root->left, root->data);
            return root;
        }
    }
    return root;
}

bool isBST(Node *root, int min, int max)
{
    if (root == NULL)
        return true;
    if (root->data > max || root->data < min)
    {
        return false;
    }
    return isBST(root->left, min, root->data) && isBST(root->right, root->data, max);
}

int main()
{
    Node *root = NULL;
    int data, t = 5;
    while (t--)
    {
        cout << "Enter data to enter: ";
        cin >> data;
        root = insertNode(root, data);
    }

    inOrder(root);
    cout << endl;
    cout << search(root, 0) << endl;
    cout << search(root, 5) << endl;
    cout << "\nFind Maximum Value: " << max(root)->data;
    cout << "\nFind Minimum Value: " << min(root)->data;
    cout << "\nDelete 3 from BST: ";
    root = deleteNode(root, 3);
    inOrder(root);
    cout << "Is tree BST?: " << isBST(root, INT_MIN, INT_MAX);
    return 0;
}