/*Given a binary search tree which is also a complete binary tree. The problem is to convert the given BST into a Min Heap with the condition that all the values in the left subtree of a node should be less than all the values in the right subtree of the node. This condition is applied to all the nodes, in the resultant converted Min Heap. */

/*Input:          4
                /   \
              2     6
            /  \   /  \
          1   3  5    7

Output:          1
               /   \
             2     5
           /  \   /  \
         3   4  6    7 */
#include <bits/stdc++.h>
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
Node *buildTree(Node *root, int n)
{
    if (root == NULL)
    {
        root = new Node(n);
        return root;
    }
    if (n > root->data)
    {
        root->right = buildTree(root->right, n);
    }
    else
    {
        root->left = buildTree(root->left, n);
    }
    return root;
}

void insertData(Node *&root)
{
    int n;
    cin >> n;
    while (n != -1)
    {
        root = buildTree(root, n);
        cin >> n;
    }
}
void printTree(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << " ";
            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
        }
    }
}
void traversal(Node *root, vector<int> &levelOrder)
{

    if (root == NULL)
    {
        return;
    }
    traversal(root->left, levelOrder);
    levelOrder.push_back(root->data);
    traversal(root->right, levelOrder);
}
void BuildTree(int &index, vector<int> &levelOrder, int size,Node*root)
{
    if (root==NULL || index>=size)
    {
        return ;
    }
    else
    {
      root->data=levelOrder[index++];
        BuildTree(index, levelOrder, size,root->left);
       BuildTree(index, levelOrder, size,root->right);
     
    }
}
int main()
{
    Node *root = NULL;
    insertData(root);
    cout << "printing Tree" << endl;
    printTree(root);

    vector<int>levelOrder;
      
    traversal(root, levelOrder);

    int size = levelOrder.size();
    int index = 0;

    BuildTree(index, levelOrder, size,root);
    cout<<"Printing Tree"<<endl;
    printTree(root);
    return 0;
}