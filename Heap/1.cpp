#include <bits/stdc++.h>
using namespace std;
/// 1 based indexing///////////
class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        // take the value and insert it at the end of the array
        size = size + 1;
        int index = size;
        arr[index] = val;
        // now we have to check if the parent is greater than the child or not
        while (index > 1)
        {
            int parent = index / 2;
            // max heap
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                break;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteNode()
    {
        if (size == 0)
        {
            cout << "Heap is empty" << endl;
            return;
        }
        // swap the first and last element
        swap(arr[1], arr[size]);
        size--; /// decresing the size of the heap so that the last element is not considered
        // take root node to its correct position
        int index = 1;
        while (index < size)
        {
            int left = 2 * index;
            int right = 2 * index + 1;
            if(left<size && arr[index] < arr[left] && arr[left] > arr[right]){
                swap(arr[index],arr[left]);
                index = left;
            }
            else if(right<size && arr[index] < arr[right] && arr[right] > arr[left]){
                swap(arr[index],arr[right]);
                index = right;
            }
            else{
                break; 
            }

        }
    }
};

/// 1 based indexing
void hepify(int arr[],int size,int index){
    int largest = index;
    int left = 2*index;
    int right = 2*index+1;
    if(left<=size && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<=size && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest!=index){
        swap(arr[index],arr[largest]);
        hepify(arr,size,largest);
    }
    else{
        return;
    }
}

void heapSort(int arr[],int n){
    int size=n;
    while(size>1){
        swap(arr[size], arr[1]);
        size--;
        hepify(arr,size,1);
    }
}

int main()
{
    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.insert(55);
    h.insert(70);
    h.print();
    // delete the root node of the heap
    h.deleteNode();
    h.print();

    int arr[7] = {-1,5,1,1,2,0,0};
    int n=6;
    //forming max heap from the array
    for(int i=n/2;i>0;i--){
        hepify(arr,n,i);
    }
    //printing the array
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}