#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int element, int data){
    ///assuming that element is present in the list
    //empty list
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        // tail->next = tail;
        temp->next = temp;
    }
    else{ //non-empty list
        Node* temp = new Node(data);
        Node* current = tail;
        while(current->data != element){
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;


        }
}

void deleteNode(Node* &tail, int element){
    //empty list
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else {
        Node* prev= tail;
        Node* current = tail->next;
        while(current->data != element){
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
         // 1 node in the list
        if(prev == current){
            tail = NULL;
        }
        // >=2 nodes in the list
        //if the first node is to be deleted and jehetu circular list tai tail kintu ekhn prev(7) ta hye jabe 
        if(current == tail){
            tail = prev; //prev is the new tail that is 7 here
        }
        current->next = NULL;
        delete current; //deleting the node from memory
    }
}


void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<<temp->data<<" -> ";
        temp = temp->next;
    } while(temp!=tail);
    cout<<endl;
}

using namespace std;
int main()
{

    Node* tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 3, 2);
    print(tail);
    deleteNode(tail, 3);
    // deleteNode(tail, 7);
    
    print(tail);
    cout<<tail->data;



    return 0;
}