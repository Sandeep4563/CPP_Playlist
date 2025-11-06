#include <bits/stdc++.h>
using namespace std;

//parametrized
void sumofN(int i, int sum) {
    if (i < 1) {
        cout << sum;
        return;
    }
    sumofN(i - 1, sum + i);
}

//functional
int sumOfn(int n){
    if(n==0){
        return 0;
    }

    return n+sumOfn(n-1);
}

int main() {
    // #ifndef online_judge
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int n;
    cin >> n;
    sumofN(n, 0);
    cout << endl;
    cout << sumOfn(n);
}
