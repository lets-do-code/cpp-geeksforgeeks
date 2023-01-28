#include <iostream>
#include <stack>

using namespace std;

class Stack
{

    // properties/data members
public:
    int *arr;
    int top;
    int size;

    // beheaviour/function{
    //(constructor)
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    
// push function
//complexity of push element == O(1)

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is overflow" << endl;
        }
    }

// pop function
//complexity of pop element == O(1)
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is Underflow" << endl;
        }
    }

// check top element function
//complexity of access peek element == O(1)

    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

// check stack is empty or not
//complexity of check stack (empty or not) == O(1)

    bool isempty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};
int main()
{

    Stack st(5);
    st.push(12);
    st.push(30);
    st.push(45);
    st.push(12);
    st.push(30);

// check peak/top element 

    cout << st.peek() << endl;

// pop element

    st.pop();

// check peak/top element 

    cout << st.peek() << endl;

// pop element

    st.pop();

// check peak/top element 

    cout << st.peek() << endl;

// pop element

    st.pop();
    
// check peak/top element 

    cout << st.peek() << endl;

//check stack is empty or not

    if(st.isempty())cout<<"Stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;

    return 0;
}