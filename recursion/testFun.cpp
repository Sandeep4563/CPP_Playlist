#include<bits/stdc++.h>
using namespace std;

// int sum1(int n,int sum){
//     if(n < 1){
//         return sum;
//     }
//     sum1(n-1,sum+n);
// }

// void reverse(int i,int j,int arr[]){
//     if(i>j/2){
//         return;
//     }
//     swap(arr[i],arr[j]);
//     reverse(i+1,j-1,arr);
// }


// void fun(int i,int n){
//     if(i==n) return;

//     cout<<i<<" ";

//     fun(i+1,n);
// }

// void fun(int i){
//     if(i==-1){
//         return;
      
//     }
//     fun(i-1);
//     cout <<i <<" ";

// }

// int fibo(int n){
//     if(n<=1) {
//         return n;
//     }
    
//     int s=fibo(n-1);
//      int l=fibo(n-2);
//      return l+s;
// }




// int  main(){
//     int arr[]={1,2,3};
    //   reverse(0,4,arr);

    //  for(int i=0;i<3;i++){
    //       for(int j=i;j<3;j++){
    //         for(int k=i;k<=j;k++){
    //          cout << arr[k] << " ";
    //         }
    //         cout << endl;
    //       }

    //  }

    // cout << fibo(5);
// }


// int fact(int i){
//   if(i==1) return 1;
//     return i*fact(i-1);
// }

// int main(){
//   cout << fact(4);
// }


// int main(){
// int l=0;
// int sl=1;
// int i=0;
// int sum=0;
// while(i<=8){
//   sum=sum+l;
//   cout << sum << " ";
//   l=sl;
//   sl=sum;
//   i++;
// }  


// }



//combination sum or subsequence whose sum is k
// void fun(int ind,vector<int> &arr,vector<int>& ds,int k){
//    if(arr.size()==ind){
//     if(k==0){
//      for(int x:ds){
//       cout << x <<" ";
//     }
//     cout << endl;
//     }
//      return;
//    }
//    if(arr[ind] <= k){
//       ds.push_back(arr[ind]);
//        fun(ind+1,arr,ds,k-arr[ind]);
//        ds.pop_back();
//    }
      
//      fun(ind+1,arr,ds,k);

// }
    
   


// int main(){
//   vector<int> n={2,3,6,7};
//   int k=7;
//   vector<int> ds;
//    fun(0,n,ds,7);
// }

void fun(int n,int k){
  int sum=0;
  for(int i=0;i<n;i++){
    if(i==k){
      break;
    }
    cout << "hello" <<' ';
    sum=sum+i;
    
  }
  cout <<"hello sir"<<' ';
  cout << sum;
}

int main(){
  int k=3;
  fun(5,3);
}


