/*
Reverse a 3-Digit Number

Take an integer input between 100 and 999.

Without converting it to a string, print the reversed number.

Concept: Modulo operator (%) and integer division (/).

*/

#include<iostream>
#include<algorithm>
#include<string>
#include<typeinfo>
using namespace std;
int main(){
    int r;
    cout<<"Enter a Three Digit Number : ";
    cin>>r;
    if(r>=100 & r<=999){
        cout<<typeid(r).name();
        string s=to_string(r);
        cout<<s;
        cout<<endl;
        cout<<typeid(s).name();
        cout<<endl;
        reverse(s.begin(),s.end());

        cout<<s;
        return 0;

    }
    else{
        cout<<"INPUT A THREE DIGIT NUMBER ! ";
    }
}