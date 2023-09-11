#include <bits/stdc++.h>
using namespace std;
class BinaryNode
{
public:
    int data;
    BinaryNode *left;
    BinaryNode *right;
    BinaryNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

BinaryNode *buildtree(BinaryNode *root)
{
    cout << "Enter data " << endl;
    int data;
    cin >> data;
    // int *arr = new int[100];
    root = new BinaryNode(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of" << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter data for inserting in right of" << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void levelOrderTraversal(BinaryNode *root)
{
    queue<BinaryNode *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        BinaryNode *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // level 0 complete
            cout << endl;
            if (!q.empty())
            { // queue is not empty...queue have some elements
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(BinaryNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(BinaryNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(BinaryNode *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    BinaryNode *root = NULL;
    // create tree
    root = buildtree(root);
    /// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order traversal
    cout << "Level order traversal" << endl;
    levelOrderTraversal(root);
    cout<<endl;
    // inorder traversal
    cout << "Inorder traversal" << endl;
    inorder(root);
    cout<<endl;
    // preorder traversal
    cout << "Preorder traversal" << endl;
    preorder(root);
    cout<<endl;
    // postorder traversal
    cout << "Postorder traversal" << endl;
    postorder(root);
    cout<<endl;


    return 0;
}