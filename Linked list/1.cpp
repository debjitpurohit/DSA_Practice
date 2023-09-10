 #include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){ //constructor
        this->data = data;
        this->next = NULL;
    }

    ///destructor
    // ~Node(){
    //     int val = this->data;
    //     if(this->next!=NULL){
    //         delete next;
    //         next = NULL;
    //     }
    //     cout<<"Deleting node with value "<<val<<endl;
    // }
};




void insertAtHead(Node* &head, int data){ //passing head by reference

  //new node creation 
    Node* temp = new Node(data);
    //connect the next of new node to head/first node
    temp->next = head;
    //update the head
    head = temp;
}

void insertAtTail(Node* &tail, int data){
      //new node creation 
    Node* temp = new Node(data);
    tail->next = temp;
    // tail = temp;
    tail = tail->next;

}

void insertAtPosition(int position,int data, Node* &head , Node* &tail){
   if(position==1){
       insertAtHead(head,data);
       return;
   }
    Node* temp = new Node(data);
    Node* temp2 = head;
    for(int i=1;i<position-1;i++){
        temp2 = temp2->next;
    }
    if(temp2->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}
void deleteNode(Node* &head, int position){
    if(position==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    for(int i=1;i<position-1;i++){
        temp = temp->next;
    }
    Node* current = temp->next;
    temp->next = current ->next;
    delete current;
}

void printTheLinkedList(Node* &head ){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}





int main()
{

    Node* node1 = new Node(40); //allocated in heap
    // cout<<node1->data<<endl; //so -> is used
    // cout<<node1->next<<endl;

    //inserting at head
    Node* head = node1; //head is a pointer to node1
    Node *tail= node1; //tail is a pointer to node1
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    printTheLinkedList(head);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    printTheLinkedList(head);
    insertAtPosition(3,35,head,tail);
    printTheLinkedList(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    deleteNode(head,6);
    printTheLinkedList(head);
        cout<<head->data<<endl;
    cout<<tail->data<<endl;

    return 0;
}