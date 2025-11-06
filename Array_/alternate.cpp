//rearrange the given array on the basis of sign
//if number of pos == negative
//number of neg>pos or vice-versa
//since we have to store the element in alternatie i.e pos at even and neg at odd 
#include<bits/stdc++.h>
using namespace std;

//this is for if pos == neg   //optimized approach
vector<int> alternate(int arr[],int n){
 vector<int> ans(n,0);
    int pos=0;
    int neg=1;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[pos]=arr[i];
            pos=pos+2;
        }
        else{
            ans[neg]=arr[i];
            neg=neg+2;
        }
    }
       return ans;
}

#include <vector>
using namespace std;

vector<int> alter(int arr[], int n) {
    vector<int> pos, neg;
    vector<int> ans;  // start empty

    // Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    int i = 0;
    // Alternate until one vector runs out
    while (i < pos.size() && i < neg.size()) {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
        i++;
    }

    // Append remaining positives
    while (i < pos.size()) {
        ans.push_back(pos[i]);
        i++;
    }

    // Append remaining negatives
    while (i < neg.size()) {
        ans.push_back(neg[i]);
        i++;
    }

    return ans;
}



int main(){
    int arr[]={2,4,-1,3,-2,-9,7,8};
    int n=8;

   
   
//    vector<int> ans= alternate(arr,n);

//    


  vector<int> ans=alter(arr,n);
 for(auto x:ans){
       cout << x << " ";
     }
  
}