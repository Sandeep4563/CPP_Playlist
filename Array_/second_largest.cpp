#include<iostream>
using namespace std;

void second_Largest(int arr[],int n){
     int largest=arr[0];
     int second=0;
    for(int i=1;i<n;i++){
       if(arr[i] > largest){
            largest=arr[i];
        }
        else if(arr[i] < largest && arr[i] > second ){
                   second=arr[i];
        }
       }
       cout << largest << " ";
       cout << second;
}

int main(){
    int arr[]={13,45,23,42};
    int n = sizeof(arr)/sizeof(arr[0]);
    second_Largest(arr,n);

}