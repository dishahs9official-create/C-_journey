#include<iostream>
using namespace std;
int main(){
    int num, tens ,ones;
    cout<<"ENTER A TWO DIGIT NUMBER : ";
    cin>>num;
    if(num>=10 && num<=99){
        tens=num/10;
        ones=num%10;
        cout<<ones;
        cout<<tens;

    }
    else{
        cout<<"INVALID INPUT";
    }
    


}
