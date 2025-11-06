#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(int arr[], int n) {
    stack<int> st;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        // Pop until we find a greater element
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        st.empty() ? (ans[i]=-1):(ans[i]=st.top());
            
        st.push(arr[i]);
    }
    return ans;
}

int main() {
    int arr[] = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2, 4, 6};
    int n = 12;

    vector<int> ans = nextGreater(arr, n);

    for (int x : ans) {
        cout << x << " ";
    }
}
