#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n<0){
        cout<<"Invalid input";
    }
    else{
    if(n>99 and n<1000){
        cout<<"YES , it is a Three digit number ";
    }
    else{
        cout<<"Not a three digit number";
    }
}
}
