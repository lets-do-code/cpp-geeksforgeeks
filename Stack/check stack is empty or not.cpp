#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    //creation of stack

    stack<int>s;

    //Push operation
    
    s.push(1);
    s.push(2);

    cout<<"this is the top element "<<s.top()<<endl;

    //Pop operation

    s.pop();

    //check top element
    cout<<"this is the top element after pop "<<s.top()<<endl;

    //check empty or not
    if(s.empty()) cout<<"Stack is empty"<<endl;
    else cout<<"Stack is not empty"<<endl;


    //Pop operation

    s.pop();


    //check empty or not
    if(s.empty()) cout<<"Stack is empty"<<endl;
    else cout<<"Stack is not empty"<<endl;


    return 0;
}