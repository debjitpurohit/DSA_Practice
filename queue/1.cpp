class Queue {
    int* arr;
    int size;
    int frnt;
    int rear;
public:
    // Queue() {
    //     // Implement the Constructor
    //     size=100001;
    //     arr= new int[size];
    //     frnt=0;
    //     rear=0;
    // }
     Queue(int data) {
        // Implement the Constructor
        this->size=data;
        arr= new int[size];
        frnt=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(rear==frnt) return true;
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if (rear == size) {
          cout << "Queue is full" << endl;
        } else {
          arr[rear] = data;
          rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(frnt==rear)  return -1;
        else{
            int ans = arr[frnt];
            arr[frnt]=-1;
            frnt++;
        if(frnt==rear){
            rear=0;
            frnt=0;
           }
         return ans;
        }


    }

    int front() {
        // Implement the front() function
        if(frnt==rear) return -1;
        else {
            return arr[frnt];
        }
    }
};