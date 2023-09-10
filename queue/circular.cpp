class CircularQueue{
    int *arr;
    int frnt;
    int rear;
    int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        this->size=n;
        arr=new int[size];
        frnt=rear=-1;
    };

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((frnt==0 && rear==size-1) || (rear== (frnt-1)%(size-1))){
            // cout<<"queue is full"<<endl;
            return false;
        }
        else if(frnt==-1)//first element aya hai
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
        arr[rear]=value;
        return true;
 }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(frnt==-1) {
            // cout<<"queue is empty"<<endl;
            return -1;
        }
        int ans = arr[frnt];
        arr[frnt]=-1;
        if(frnt==rear){ //single lem is present
            frnt=rear=-1;
        }
        else if(frnt==size-1){
            frnt=0;//to maintain cyclic nAture
        }
        else {
            frnt++;
        }
        return ans;


    }
};