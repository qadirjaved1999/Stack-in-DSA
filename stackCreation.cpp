#include<iostream>
#include<stack>
using namespace std;
int main()
{

//Creation of Stack
  stack<int> a;

// Push Operation
   a.push(1);
   a.push(2);
   a.push(3);


// pop Operation
   a.pop();
   
    cout<<"Printing top element "<<a.top()<<endl;

    if(a.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty "<<endl;
    }
   
    cout<<"The Size Of Stack is = "<<a.size()<<endl;
 return 0;
}