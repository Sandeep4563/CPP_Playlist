#include<bits/stdc++.h>
using namespace std;


void over(vector<vector<int>> & arr,vector<vector<int>> & ans){
for(int i=0;i< arr.size();i++){
   if(ans.empty() || arr[i][0] > ans.back()[1]){
    ans.push_back(arr[i]);
   }
   else{
       ans.back()[1]=max(ans.back()[1],arr[i][1]);
   }
}
}

int main(){
vector<vector<int>> arr={{1,3},{2,4},{2,6},{8,9},{8,10},{9,11},{15,18},{16,17}};
 vector<vector<int>> ans;

 over(arr,ans);
    

  for (const auto &row : ans) {          
        for (int num : row) {         
            cout << num << " ";
        }
        cout << endl;          
    }


    return 0;
}