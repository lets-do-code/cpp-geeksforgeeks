#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    //creation of stack

    stack<int>s;

    //Push operation
    
    s.push(1);
    s.push(2);
    s.push(3);

    cout<<"this is the top element "<<s.top()<<endl;

    //Pop operation

    s.pop();

    //check top element
    cout<<"this is the top element after pop "<<s.top()<<endl;


    return 0;
}