#include<iostream>
using namespace std;

void maximum_consective(int arr[],int n){
      int max_count=0;
     int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            count++;
            max_count=max(count,max_count);
        }
    else{
        count=0;
    }
            }

   cout << max_count;
  
}

int main(){
    int nums[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n=9;
   maximum_consective(nums,n);
}