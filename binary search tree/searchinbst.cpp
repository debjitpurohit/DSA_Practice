/////////////////recursive
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root==NULL) return false;//absent
    if(root->data == x) return true;
    if(root->data > x){
        //left part mein jao
        searchInBST(root->left,x);
    }
    else {
        searchInBST(root->right,x);
    }
}

////////////////itreative
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    BinaryTreeNode<int> *temp = root;
    while(temp != NULL){
        if(temp->data==x) return true;
        if(temp->data > x) temp = temp->left;
        else temp=temp->right;
    }
    return false;
}