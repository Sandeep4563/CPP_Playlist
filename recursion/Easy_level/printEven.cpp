#include<bits/stdc++.h>
using namespace std;

void fun(int num,int n){
    if(num>n) return;

    cout<< num << " ";

    fun(num+2,n);
}

int main(){
    fun(2,9);
}