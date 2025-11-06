// #include<bits/stdc++.h>
// using namespace std;

// int fun(int low,int high,int arr[]){
//      int pivot=arr[low];
//      int i=low;
//      int j=high;

//      while(i<j){
//         while(arr[i]<=pivot && i<=high-1){
//             i++;
//         }
//         while(arr[j] >pivot && j>=low){
//             j--;
//         }
//         if(i<j){
//             swap(arr[i],arr[j]);
//         }
//      }

//      swap(arr[low],arr[j]);
//      return j;
// }
// void quickSort(int low,int high,int arr[]){

//     if(low < high){
//         int partition=fun(low,high,arr);
//         quickSort(low,partition-1,arr);
//         quickSort(partition+1,high,arr);
//     }

// }

// int main(){
//     int arr[]={2,1,4,5,1,4};
//     int n=6;
//     quickSort(0,n-1,arr);

//     for(int i=0;i<n;i++){
//         cout << arr[i] <<" ";
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// // Partition function
// int partition(int low, int high, int arr[]) {
//     int pivot = arr[low];  // pivot is now randomized before call
//     int i = low;
//     int j = high;

//     while (i < j) {
//         while (arr[i] <= pivot && i <= high - 1) {
//             i++;
//         }
//         while (arr[j] > pivot && j >= low) {
//             j--;
//         }
//         if (i < j) {
//             swap(arr[i], arr[j]);
//         }
//     }

//     swap(arr[low], arr[j]); // place pivot in correct position
//     return j;
// }

// // Randomized partition: randomly selects pivot
// int randomizedPartition(int low, int high, int arr[]) {
//     int randomIndex = low + rand() % (high - low + 1); // pick random index
//     swap(arr[low], arr[randomIndex]); // move random pivot to start
//     return partition(low, high, arr);
// }

// // QuickSort using randomized partition
// void quickSort(int low, int high, int arr[]) {
//     if (low < high) {
//         int pivotIndex = randomizedPartition(low, high, arr);
//         quickSort(low, pivotIndex - 1, arr);
//         quickSort(pivotIndex + 1, high, arr);
//     }
// }

// int main() {
//     srand(time(0)); // seed for random pivot selection
//     int arr[] = {2, 1, 4, 5, 1, 4};
//     int n = 6;

//     quickSort(0, n - 1, arr);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }


#include <bits/stdc++.h>
using namespace std;

// Partition with random pivot
int partitionRandom(int arr[], int low, int high) {
    // Random pivot selection
    int pivotIndex = low + rand() % (high - low + 1);
    swap(arr[pivotIndex], arr[high]); // move pivot to end

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // place pivot in correct position
    return i + 1;
}

// QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partitionRandom(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    srand(time(0)); // seed for random numbers

    int arr[] = {2, 1, 4, 5, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
