#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mpp;

int arr[]={1,2,3,1,4,6,2,6};

int n=8;
for(int i=0;i<n;i++){
       mpp[arr[i]]++; 
}
 for(auto it:mpp){
    cout << it.first <<"->" <<it.second << endl;
 }


}