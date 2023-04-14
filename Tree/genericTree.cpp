#include<iostream>
using namespace std;
class Node<E> 
{
    <E> data;
    Node* left,right;
    public:
    Node(<E> data)
    {
        this->data = data;
        this->left = NULL;
        this->right=NULL;
    }
    <E> getData()
    (
        return data;
    )

}


int main()
{
    Node<int> root(5);
    return 0;
}