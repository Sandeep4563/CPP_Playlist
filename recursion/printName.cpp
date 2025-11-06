#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if(i>n) return;//basecase
    cout <<"Sandeep"<<endl;
   
    fun(i+1,n);//functioncall
    
}

int main(){
  int n;
  cout << "enter Number:";
  cin>>n;
  fun(1,n);
}