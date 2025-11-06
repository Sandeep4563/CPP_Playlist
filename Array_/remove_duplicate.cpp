//Remove duplicates from sorted array
#include<bits/stdc++.h>
using namespace std;

int unique(int arr[],int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i] != arr[i+1]){
            count +=1;
        }
    }
    count +=1;
    return count;
}

int main(){
int arr[]={-2, 2, 4, 4, 4, 4, 5, 5};
int n=8;
int ans=unique(arr,n);
cout << ans;
}