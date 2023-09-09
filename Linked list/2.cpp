#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    cout << "NULL<-";
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int getLength(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insertAtHead(Node *&head, int data)
{
    // when list is empty
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        // creation of new node
        Node *temp = new Node(data);
        // connect the next of new node to head/first node
        temp->next = head;
        // connect the prev of head to new node
        head->prev = temp;
        // update the head
        head = temp;
    }
}

void insertAtTail(Node *&tail, int data)
{
    // when list is empty
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp; 
    }
    else
    {
        // creation of new node
        Node *temp = new Node(data);
        // connect the next of tail to new node
        tail->next = temp;
        // connect the prev of new node to tail
        temp->prev = tail;
        // update the tail
        tail = temp;
    }
}

void insertAtPosition(int position, int data, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = new Node(data);
    Node *temp2 = head;
    for (int i = 1; i < position - 1; i++)
    {
        temp2 = temp2->next;
    }
    if (temp2->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    temp->next = temp2->next;
    temp2->next->prev = temp;
    temp2->next = temp;
    temp->prev = temp2;
}

void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp->next->next == NULL)
    {
        Node *current = temp->next;
        temp->next = NULL;
        delete current;
        return;
    }
    Node *current = temp->next;
    temp->next = current->next;
    current->next->prev = temp;
    delete current;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    int length = getLength(head);
    cout << length << endl;

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    print(head);
    insertAtTail(tail, 60);
    insertAtTail(tail, 70);
    insertAtTail(tail, 80);
    insertAtTail(tail, 90);
    print(head);
    cout << head->data << endl;
    cout << tail->data << endl;
    insertAtPosition(1, 100, head, tail);
    insertAtPosition(5, 0, head, tail);
    insertAtPosition(10, 200, head, tail);
    print(head);
    deleteNode(head, 10);
    deleteNode(head, 1);
    print(head);
    cout << head->data << endl;
    cout << tail->data << endl;

    return 0;
}