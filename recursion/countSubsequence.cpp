//printing the count of subsequence for all for the given sum
#include<bits/stdc++.h>
using namespace std;

int sumOfSubsequence(int ind,int sum,int arr[],int n,int s){
    if(ind == n){
        if(s==sum){   
            return 1;   
        }

        return 0;
        
    }
        

    s +=arr[ind];
  int left= sumOfSubsequence(ind+1,sum,arr,n,s);
     s -=arr[ind];
  int right= sumOfSubsequence(ind+1,sum,arr,n,s);
  return left+right;
}
   


int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=3;

   cout << sumOfSubsequence(0,sum,arr,n,0);
}