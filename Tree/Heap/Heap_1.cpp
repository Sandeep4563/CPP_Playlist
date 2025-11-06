#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int index,int n){
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;

    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }

    if(largest!=index){
        swap(arr[index],arr[largest]);
        heapify(arr,largest,n);
    }
}




void heapSort(int arr[],int n){
   for(int i=n-1;i>=0;i--){
    swap(arr[0],arr[i]);
    heapify(arr,0,i);
   }
}
//build heap max
void BuildHeapMax(int arr[],int n){

    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
}

//for displaying the element in UI
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}



int main(){
  int arr[]={10,12,3,1,56,74};
  int n=6;
  BuildHeapMax(arr,n);
  heapSort(arr,n);
  print(arr,n);
}
