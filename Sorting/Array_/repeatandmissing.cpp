#include<bits/stdc++.h>
using namespace std;
int missing=-1;
int repeating=-1;
vector<int> repeatAndMissing(vector<int> &arr){
int n=arr.size();
int hash[n]={0};
for(int i=0;i<n;i++){
   hash[arr[i]]++;
}

for(int i=0;i<n;i++){
    if(hash[i] == 2){
        repeating=i;
    }
    else if(hash[i] == 0){
        missing=i;
    }
}

return {repeating,missing};

}

int main(){
    vector<int> arr={4,3,6,2,1,1};
    vector<int> ans;
    ans=repeatAndMissing(arr);
    for(int x:ans){
        cout << x << " ";
    }
    return 0;
}