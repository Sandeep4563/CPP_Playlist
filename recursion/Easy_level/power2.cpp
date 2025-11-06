#include<bits/stdc++.h>
using namespace std;


int powerOf2(int n,int pow){
    if(pow<1){
        return 1;
    }

    return n*powerOf2(n,pow-1);
}

int main(){
    cout << powerOf2(5,5);
}