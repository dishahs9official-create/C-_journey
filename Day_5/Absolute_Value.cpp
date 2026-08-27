#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n>=0){
        cout<<n;

    }
    else{
        cout<<"The absolute value is : "<<endl;
        cout<<-n;
    }
}