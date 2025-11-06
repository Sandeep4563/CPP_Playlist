#include<iostream>
using namespace std;

void moveZero(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
           swap(arr[i],arr[j]);
            j++;
        }
       
    }
}


int main(){
   int arr[]={0, 1, 4, 0, 5, 2};
   int n=6;
moveZero(arr,n);

for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
    
}