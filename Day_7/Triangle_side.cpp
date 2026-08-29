
//TRIANGLE INEQALITY LAW

#include<iostream>
using namespace std;
int main(){
    int s1 , s2 , s3 ;
    cout<<"Enter first side of triangle : ";
    cin>>s1;
    cout<<"Enter second side of triangle : ";
    cin>>s2;
    cout<<"Enter third side of triangle : ";
    cin>>s3;
    if(s1+s2>s3 && s2+s3>s1 && s2+s3>s1){
        cout<<"Yes, these are the sides of triangle";
    }
    else{
        cout<<"these are not side of triangle";
    }
}