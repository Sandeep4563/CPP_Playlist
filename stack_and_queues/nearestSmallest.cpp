#include<bits/stdc++.h>
using namespace std;



int main(){
    int arr[]={4,5,2,10,8};
    int n=5;
    int ans[5];
    for(int i=0;i<n;i++){
        for(int j=i-1;j<=i;j--){
            if(arr[j]<arr[i]){
                ans[i]=arr[j];
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << ans[i]<<" ";
    }
}