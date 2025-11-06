#include<iostream>
using namespace std;

//creating heap with the help of Array
class MaxHeap{
    int *arr;
    int size; //current size of the heap
    int total_size; //total number of element that can be inserted in the heap
    public:
    //default constructor
    MaxHeap(){
        arr=new int[5];
        total_size=5;
        size=0;
    }; 
    MaxHeap(int n){
        arr=new int[n];
        size=0;
        total_size=n;
    }

    void insert(int ele){
        if(size==total_size){
            cout << "Heap Overflow";
            cout << endl;
            return;
        }
        arr[size]=ele;
        int index=size;
        size++;

        //comparing if the root element is grater than the child

        while(index > 0 && arr[(index-1)/2] < arr[index]){
            swap(arr[index],arr[(index-1)/2]);
            index=(index-1)/2;
        }
    }

    //heapify function here......
    void heapify(int index){
        int largest=index;
        int right=2*index+2;
        int left=2*index+1;
        
       if(left<size && arr[left]>arr[largest]){
               largest=left;
       }
      if(right<size && arr[right]>arr[largest]){
               largest=right;
       }

       if(largest!=index){
        swap(arr[largest],arr[index]);
        heapify(largest);
       }
      
    }

    void deletion(){
    if(size==0){
        cout << "Heap underflow";
        return;
    }

    cout << arr[0] <<" is deleted" << endl;

    arr[0]=arr[size-1];
    size--;

    if(size==0) return;

    heapify(0);

}
    

    void print(){
        for(int i=0;i<size;i++){
            cout << arr[i] <<" ";
        }
    }

};
   
//deletion of element in heap


    


int main(){
   MaxHeap h;
   h.insert(10);
   h.insert(15);
   h.insert(12);
   h.insert(18);
   h.insert(18);
   h.insert(13);
   h.deletion();
   h.deletion();
   h.print();
}