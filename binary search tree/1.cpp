#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void levelOrderTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
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
            if (temp->right != NULL )
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node* insertIntoBST(Node* root,int val){
    //base case 
    if(root==NULL){
        root=new Node(val);
        return root;
    }
    if(val<root->data){
        root ->left=insertIntoBST(root->left,val);
    }
    else{
        root->right = insertIntoBST(root->right,val);
    }
    return root;
}
Node *minvalue(Node *root){
    Node *curr=root;
    while(curr->left != NULL){
        curr=curr->left;
    }
    return curr;
}
Node* maxvalue(Node* root){
    Node* curr=root;
    while(curr->right != NULL){
        curr=curr->right;
    }
    return curr;
}
Node* deleteFromBst(Node* root,int val){
    //base case
    if(root==NULL) return NULL;
    if(root->data==val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child----
        //right child
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //left child
        if(root->right==NULL && root->left!=NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minvalue(root->right)->data;
            root->data=mini;
            root->right=deleteFromBst(root->right,mini);///// delete from right of bst 
            return root;
        }
    }
    if(root->data > val){
        root->left=deleteFromBst(root->left,val);
    }
    else{
        root->right=deleteFromBst(root->right,val);
    }
    return root;

}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}
int main()
{
    Node* root= NULL;
    cout<<"Enter Data to create bst "<<endl;
    takeInput(root);
    cout<<"Level Order Traversal of BST "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"Inorder Traversal of BST "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal of BST "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal of BST "<<endl;
    postorder(root);
    cout<<endl;
    cout<<"Min value in BST "<<minvalue(root)->data<<endl;
    cout<<"Max value in BST "<<maxvalue(root)->data<<endl;
    cout<<"Enter value to delete from BST "<<endl;
    int val;
    cin>>val;
    deleteFromBst(root,val);
    cout<<"Level Order Traversal of BST "<<endl;
    levelOrderTraversal(root);
    return 0;
}