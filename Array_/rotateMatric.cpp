#include<bits/stdc++.h>
using namespace std;


int main(){
      vector<vector<int>> v={{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}};

        int n=v.size();

         //Bruta force approach
    // int rotMatrix[4][4];

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         rotMatrix[j][4-i-1]=matrix[i][j];
    //     }
    // }


    //  for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //       cout << rotMatrix[i][j] <<" ";
    //     }
    //     cout << endl;
    // }
    

    //optimal approach

    for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
        swap(v[i][j],v[j][i]);
     }
    }

    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
          cout << v[i][j] <<" ";
        }
        cout << endl;
    }
}