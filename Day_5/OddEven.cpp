#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive number : ";
    cin>>n;
    if(n>=0){
        if(n%2==0){
        cout<<"ENTERED NUMBER IS EVEN. ";
    }
    else{
        cout<<"ENTERED NUMBER IS ODD.";
    }
    }

    else{
        cout<<"Invalid input";
    }
    cout<<endl;
    cout<<"-----------------END OF CODE-------------------";
    
}