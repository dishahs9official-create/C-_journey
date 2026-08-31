#include<iostream>
using namespace std;
int main(){
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    cout<<"                                  WELCOME                                                   "<<endl;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;


    int a;
    cout<<"Enter first number : ";
    cin>>a;
    int b;
    cout<<"Enter second number : ";
    cin>>b;
    char o;
    cout<<"Enter operator : ";
    cin>>o;
    switch(o){                            //USING SWITCH
        case '+':
            cout<<"SUM : "<<a+b;
            break;

        case '-':
            cout<<"DIFFERENCE : "<<a-b;
            break;
        case '*':
            cout<<"PRODUCT : "<<a*b;
            break;
        case '/':
            cout<<"DIVISION : "<<a/b;
            break;
        default:
            cout<<"INVALID INPUT ";
            break;
    }
    cout<<endl;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    cout<<"                                  EXIT                                                   "<<endl;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
}