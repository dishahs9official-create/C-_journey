#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"ENTER YEAR : ";
    cin>>year;
    if(year >= 1000 && year <= 9999){
        if(year%4==0){
            cout<<"LEAP YEAR";
        }

        else{
            cout<<"NOT A LEAP YEAR";
        }

    }

    else{
    cout<<"INVALID INPUT";

    }
    
}