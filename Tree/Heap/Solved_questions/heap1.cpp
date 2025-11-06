#include<bits/stdc++.h>
using namespace std;
//this problem is of profit maximization
//to understand the problem
//Profit Maximisation: https://www.interviewbit.com/problems/profit-maximisation/
int maxiMization(int arr[],int n,int b){
    priority_queue<int> p;
    for(int i=0;i<n;i++){
        p.push(arr[i]);
    }
    int profit=0;
    while(b-- && !p.empty()){
     int front=p.top();
        p.pop();
        profit +=front;
        p.push(front-1);
    }
    return profit;

}

int main(){
  int arr[]={6,4,2,3};
  int n=4; 
  int maxim=maxiMization(arr,n,5);
  cout << maxim;
}