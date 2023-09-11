class CircularQueue
{
    int *arr;
    int frnt;
    int rear;
    int size;

public:
    // Initialize your data structure.
    CircularQueue(int n)
    {
        // Write your code here.
        this->size = n;
        arr = new int[size];
        frnt = rear = -1;
    };

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        // Write your code here.
        if ((frnt == 0 && rear == size - 1) || (frnt!=0 && size !=1 && rear == (frnt - 1) % (size - 1)))
        {
            // cout<<"queue is full"<<endl;
            return false;
        }
        else if (frnt == -1) // first element aya hai
        {
            frnt = rear = 0;
        }

        else if (rear == size - 1 && frnt != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue()
    {
        // Write your code here.
        if (frnt == -1)
        {
            // cout<<"queue is empty"<<endl;
            return -1;
        }
        int ans = arr[frnt];
        arr[frnt] = -1;
        if (frnt == rear)
        { // single lem is present
            frnt = rear = -1;
        }
        else if (frnt == size - 1)
        {
            frnt = 0; // to maintain cyclic nAture
        }
        else
        {
            frnt++;
        }
        return ans;
    }
};













///////////////////////////////////////////////////////with LInkeed list
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class MyCircularQueue {
public:
    
    int size, currSize = 0;
    Node* front = NULL;
    Node* rear = NULL;

    MyCircularQueue(int k) {
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull())    
            return 0;
        Node* newnode = new Node(value);
        if(front==NULL and rear==NULL){
            front = newnode;
            rear = newnode;
        }
        else{
            rear->next = newnode;
        }
        newnode->next = front;
        rear = newnode;
        currSize++;
        return 1;
    }
    
    bool deQueue() {
        if(isEmpty())   
            return 0;
        if(front == rear){
            front =NULL;
            rear = NULL;
        }
        else{
           front = front->next;
           delete rear->next;        
           rear->next = front;
        }
               
        currSize--;
        return 1;
    }
    
    int Front() {
        if(isEmpty())   
            return -1;
        return front->data;
    }
    
    int Rear() {
        if(isEmpty())   
            return -1;
        return rear->data;
    }
    
    bool isEmpty() {
        return currSize==0;
    }
    
    bool isFull() {
        return currSize==size;
    }
};