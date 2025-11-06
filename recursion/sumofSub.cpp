//printing the subsequence of all for the given sum
#include<bits/stdc++.h>
using namespace std;

void sumOfSubsequence(int ind,vector<int> &v,int sum,int arr[],int n,int s){
    if(ind == n){
        if(s==sum){  
        for(int X:v){
            cout << X <<" ";
           
        }
         cout << endl;
       
        }
         return;
    }
        

    v.push_back(arr[ind]);
    s +=arr[ind];
    sumOfSubsequence(ind+1,v,sum,arr,n,s);
    
    v.pop_back();
     s -=arr[ind];
    sumOfSubsequence(ind+1,v,sum,arr,n,s);
}
   


int main(){
    int arr[]={2,3,6,7};
    int n=4;
    int sum=7;
    vector<int> v;

    sumOfSubsequence(0,v,sum,arr,n,0);
}