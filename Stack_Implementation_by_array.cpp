#include<iostream>
#include<stdlib.h>
using namespace std;
#define n 100

class stack{
    int top;
    int* arr;
    
    public:
    stack(){
        arr = new int[n];
        top = -1;

    }

    void push(int x ){
        if(top == n-1){
            cout<<"Stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is underflow"<<endl;
            return;
        }
        top--;   
    }

    int Top(){
        if(top == -1){
            cout<<"Stack is underflow"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return true;
        }
        return false;
    }

};


int main(){
     stack st;
     
     
     st.push(5);
     st.push(1);
     cout<<st.Top()<<endl;
     st.pop();
     cout<<st.Top()<<endl;
     cout<<st.empty()<<endl;




    return 0;
}
