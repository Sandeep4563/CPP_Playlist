//printing one subsequence of for the given sum
#include<bits/stdc++.h>
using namespace std;

bool sumOfSubsequence(int ind,vector<int> &v,int sum,int arr[],int n,int s){
    if(ind == n){
        if(s==sum){  
        for(int X:v){
            cout << X <<" "; 
        }
        return true;
        }
        else return false;
         
    }
        

    v.push_back(arr[ind]);
    s +=arr[ind];
   if( sumOfSubsequence(ind+1,v,sum,arr,n,s) ==true) return true;
    
    v.pop_back();
     s -=arr[ind];
  if( sumOfSubsequence(ind+1,v,sum,arr,n,s)==true) return true;
  return false;
}
   


int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=3;
    vector<int> v;

    sumOfSubsequence(0,v,sum,arr,n,0);
}