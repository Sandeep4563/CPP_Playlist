#include<bits/stdc++.h>
using namespace std;

void print1toN(int i,int n){
    if(i>n) return;

     cout << i <<" ";

     print1toN(i+1,n);

   
}

int main(){

    print1toN(1,10);
}