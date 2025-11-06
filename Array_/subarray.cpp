#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,1,1,1,4,2,3};
    int n=9;
    int k=3;
    int sum=0;
    int maxlen=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           sum +=arr[i];
           if(sum==k){
            maxlen=max(maxlen,j-i+1);
           }
        }
    }
    cout << maxlen  ;
}