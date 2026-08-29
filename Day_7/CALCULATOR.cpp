/*
Ques : Write a program to create a calculator that performs basic arithmetic 
operations (add, subtract, multiply and divide). 
The calculator should input two numbers and an operator from user.
*/

#include<iostream>
using namespace std;
int main(){
    cout<<"----------------------WELCOME TO DISHA CALCULATOR-----------------"<<endl;
    int a , b ;
    char op;
    cout<<"ENTER FIRST NUMBER : ";
    cin>>a;
    cout<<"ENTER SECOND NUMBER : ";
    cin>>b;
    cout<<"ENTER OPERATOR : ";
    cin>>op;


    if(op=='+' ){
        cout<<"ADDITION : "<<a+b;

    }
    else if(op=='-'){
        cout<<"SUBTRATION : "<<a-b;

    }
    else if(op=='*'){
        cout<<"PRODUCT : "<<a*b;
    }
    else if(op=='/'){


        cout<<"DIVISION : "<<a/b;
    }
    else{
        cout<<"INVALID OPERATOR";
    }

    cout<<endl;
    cout<<"--------------------YOU EXITED-------------------------------";
}


