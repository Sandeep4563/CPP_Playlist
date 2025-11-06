#include<bits/stdc++.h>
using namespace std;

void GreaterE(int arr[],int n){
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n-1+i;j++){
        int ind=j%n;
        if(arr[ind]>arr[i]){
            ans[i]=arr[ind];
            break;
        }
      }
            
        }
    

    for(auto x:ans){
        cout << x<<" ";
    }
}


int main(){
    int arr[]={2,10,12,1,11};

    int n=5;
    GreaterE(arr,n);

}