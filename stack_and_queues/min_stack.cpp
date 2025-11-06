#include<bits/stdc++.h>
using namespace std;
//this will give you the min element but the timecomplexity is O(N);
// int minStack(stack<int> st){
//     int minEle=INT_MAX;
//     while(!st.empty()){
//       minEle=min(minEle,st.top());
//       st.pop();
//     }
//     return minEle;
// }



class minStack{
public:
    stack<pair<int,int>> st;

   void push23(int val){
    if(st.empty()){
      st.push({val,val});
    
    }
    st.push({val,min(val,st.top().second)});
   }

  int getMin(){
   return st.top().second;
   }
   
};

int main(){
//   stack<int> st;
//   st.push(12);
//   st.push(10);
//   st.push(30);
//   st.push(14);
//   cout << minStack(st);

minStack st;
st.push23(10);
st.push23(14);
st.push23(15);
st.push23(12); 
cout << st.getMin();
}