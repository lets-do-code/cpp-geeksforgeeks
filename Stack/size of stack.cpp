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

    //size of stack
    cout<<"Size of stack "<<s.size()<<endl;

    //pop operation
    s.pop();

    //size of stack
    cout<<"Size of stack "<<s.size()<<endl;

    
    return 0;
}