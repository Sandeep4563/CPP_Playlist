//find the total sum of consequtive array
#include<bits/stdc++.h>
using namespace std;

int totalSum(int arr[],int n,int k){
    int sum=0;
    int l=0;
    int r=k-1;
    int maxsum=INT_MIN;
    for(int i=0;i<k;i++){
        sum +=arr[i];
        cout<<sum<<endl;
    }
    while(r<n-1){
        sum -=arr[l];
        l++;
        r++;
        sum +=arr[r];
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}

int main(){
    int arr[7]={-1,2,3,3,4,5,-1};
    int n=7;
    int k=4;//window size
   cout << totalSum(arr,n,k);
    
}