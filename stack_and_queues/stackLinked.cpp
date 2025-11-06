#include <bits/stdc++.h>
using namespace std;

class stack12 {
public:
    int data;
    stack12* next;

    stack12(int data, stack12* next = NULL) {
        this->data = data;
        this->next = next;
    }
};

class stackImp {
private:
    stack12* top = NULL;

public:
    void push(int x) {
        stack12* newnode = new stack12(x, top);
        top = newnode;
    }

    void peek() {
        if(top == NULL) {
            cout << "stack_empty\n";
            return;
        }
        cout << top->data << "\n";
    }

    void pop() {
        if(top == NULL) {
            cout << "no element to pop\n";
            return;
        }
        stack12* temp = top;
        top = top->next;
        delete temp;
    }

    ~stackImp() { 
        while(top) {
            pop();
        }
    }
};

/**
 * @brief The main function, entry point of the program.
 * 
 * This function demonstrates the basic operations of the stackImp class.
 * It creates a stack, pushes three integer values (20, 23, 21),
 * pops the top element (21), and then prints the new top element (23).
 * 
 * @return int Returns 0 upon successful execution, although it's implicit in this case.
 */
int main() {
    stackImp st;
   st.push(20);
   st.push(23);
   st.push(21);
   st.pop();
   st.peek();

}
