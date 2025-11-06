#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int *p = &a;
    int **k = &p;
    int *l;

    cout << "address of a: " << &a << endl;
    cout << "address stored in p (i.e., address of a): " << p << endl;
    cout << "address  of in p : " << &p << endl;
    cout << "value of a using pointer p: " << *(p+1) << endl;
    cout << "address  of in p : " << &p << endl;



    cout << "address stored in k (i.e., address of p): " << k << endl;
    cout << "value of a using double pointer k: " << **k << endl;

    cout << "address of pointer p itself: " << &p << endl;
    cout << "address of pointer k itself: " << &k << endl;

    cout << "address of l: " << &l << endl;
   
}
