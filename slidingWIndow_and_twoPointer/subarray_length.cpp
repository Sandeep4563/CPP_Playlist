#include<bits/stdc++.h>
using namespace std;

int subarray(int arr[],int n,int k){
int l=0;
int r=0;
int sum=0;
int maxlen=INT_MIN;
while(r<n){
    sum=sum+arr[r];

    while(sum>k){
        sum -=arr[l];
        l++;
        
    }
    if(sum <= k){
        maxlen=max(maxlen,r-l+1);
    }
    r++;
}
return maxlen;
}


int main(){

    int arr[]={2,5,1,7,10};
    int n=5;
    cout <<subarray(arr,n,14);
}