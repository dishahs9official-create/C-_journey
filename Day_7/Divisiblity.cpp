// Take a positve integer and input and tell if it is divisible by 5 and 3 both .
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive number : ";
    cin>>n;
    if(n%3==0 && n%5==0 ){
        cout<<"Divisible by both 3 and 5 ";

    }
    else{
        cout<<"Not divisible by both 3 and 5";
    }
}