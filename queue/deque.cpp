class Deque
{
    int *arr;
    int frnt;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size=n;
        arr= new int[n];
        rear=frnt= -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {

        if(isFull()){

            return false;
        }
        else if(isEmpty()){
            frnt=rear=0;
        }
        else if(frnt==0 && rear != size-1 ){
            frnt=size-1;
        }
        else {
            frnt--;
        }
        arr[frnt]= x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if(isFull()){
            return false;
        }
        else if(isEmpty())//first element aya hai
        {
          frnt=rear=0;
          }  

         else if(rear==size-1 && frnt !=0)
         {
          rear=0;
         }  
      else {
          rear++;
      }
        arr[rear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        int ans = arr[frnt];
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


    int popRear()
    {
        // Write your code here.
        if (isEmpty())
        {
            // cout<<"queue is empty"<<endl;
            return -1;
        }
        int ans = arr[rear];
        if (frnt == rear)
        { // single lem is present
            frnt = rear = -1;
        }
        else if (rear==0)
        {
            rear=size-1; // to maintain cyclic nAture
        }
        else
        {
            rear--;
        }
        return ans;


    }

    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[frnt];

    }

    int getRear()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[rear];

    }

    bool isEmpty()
    {
        if(frnt==-1) return true;
        else return false;
    }

    bool isFull()
    {
        if((frnt==0 && rear==size-1) || (frnt!=0 && rear == (frnt - 1) % (size - 1))){
            return true;
        }
        else return false;


    }
};