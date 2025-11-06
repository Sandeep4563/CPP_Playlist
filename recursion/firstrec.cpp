#include<bits/stdc++.h>
using namespace std;
int cnt=0;

void fun(){
    if(cnt==10) return;//basecase
    cout <<cnt<<endl;
    cnt++;
    fun();//functioncall
    
}

int main(){
  fun();
}