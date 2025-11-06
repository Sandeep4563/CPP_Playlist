#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }
    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= high) temp.push_back(arr[right++]);

    // Copy merged result back
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

int countPair(int arr[], int low, int mid, int high) {
    int right = mid + 1;
    int cnt=0;
    for (int i = low; i <= mid; i++) {
        while (right <= high && arr[i] > 2LL * arr[right]) {
            right++;
        }
        cnt += (right - (mid + 1));
    }
    return cnt;
}

int mergeSort(int arr[], int low, int high) {
    int cnt=0;
    if (low >= high) return cnt;

    int mid = low + (high - low) / 2;
    cnt +=mergeSort(arr, low, mid);
    cnt +=mergeSort(arr, mid + 1, high);
    cnt +=countPair(arr, low, mid, high);
    merge(arr, low, mid, high);

    return cnt;
}

int main() {
    int arr[] = {40, 25, 19, 12, 9, 6, 2};
    int n = 7;  // ✅ Correct size
    int cnt=mergeSort(arr, 0, n - 1);
    cout << cnt << endl;
    return 0;
}
