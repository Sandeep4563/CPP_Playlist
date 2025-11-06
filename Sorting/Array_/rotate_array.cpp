//rotate array to the left by kth position

#include<iostream>
using namespace std;

void reverse(int arr[],int i,int k){
     int st=i;
     int end=k-1;
     while(st < end){
        swap(arr[st],arr[end]);
        st++;
        end--;
     }
}

void rotateK(int arr[],int n,int k){
    
    k=k%n;

    reverse(arr,0,k);
    reverse(arr,k,n);
    reverse(arr,0,n);

}


void rotateArr(int arr[],int n,int k){
   k=k%n;
int d=n-k;
   int temp[k];
for(int i=0;i<k;i++){
   temp[i]=arr[i];
}

  for(int i=k;i<n;i++){
   arr[i-k]=arr[i];
  }

  for(int i=0;i<k;i++){
   arr[i+d]=temp[i];
  }
}

int main(){
int arr[]={3,7,8,9,10,11};
int n=6;
int k=2;

//   rotateK(arr,n,k);

rotateArr(arr,n,k);


 for(int i=0;i<n;i++){
    cout << arr[i]<<" ";
 }
}