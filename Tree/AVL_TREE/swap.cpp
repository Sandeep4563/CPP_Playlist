#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
}

int main(){
int x=5;
int y=10;
swap(&x,&y);

cout << x << " " << y;
}