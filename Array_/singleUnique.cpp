//Find the number that appears once, and the other numbers twice

#include<bits/stdc++.h>
using namespace std;

int singleUnique(int arr[],int n){
    int temp=0;
    for(int i=0;i<n;i++){
        temp^=arr[i];
    }
    return temp;
}

int main(){
int arr[]={4,1,2,1,2};
int n=5;
cout << singleUnique(arr,n);
}