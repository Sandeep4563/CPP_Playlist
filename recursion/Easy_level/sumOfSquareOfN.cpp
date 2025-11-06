#include<bits/stdc++.h>
using namespace std;


int sumOfSqr(int n){
    if(n==1){
        return  1;
    }

    return n*n+sumOfSqr(n-1);
}

int main(){
    cout << sumOfSqr(5);
}