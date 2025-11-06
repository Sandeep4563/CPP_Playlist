//print all the subsequence
#include<bits/stdc++.h>
using namespace std;

void subSequence(int ind,int arr[],vector<int> &v,int n){
      if(ind >=n){
        for(int x:v){
            cout <<" "<< x;
        }
        cout << endl;
        return;
      }

       v.push_back(arr[ind]);
      subSequence(ind+1,arr,v,n);//take 
     
       v.pop_back();
       subSequence(ind+1,arr,v,n);//not take


}

int main(){
    vector<int> v;
    int arr[]={3,1,2};
    int n=3;
    subSequence(0,arr,v,n);
}