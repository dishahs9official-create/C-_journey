/*

Ques : Take input percentage of a student and print the Grade according to marks:

1) 81-100 Very Good
2) 61-80 Good
3) 41-60 Average
4) <=40 Fail


*/
#include<iostream>
using namespace std;
int main(){
    int p;
    cout<<"-------------------WELCOME TO GRADE CALCULATOR----------------------"<<endl;
    cout<<"ENTER YOUR PERCENTAGE : ";
    cin>>p;
    if(p<100 && p<0){
        cout<<"INVALID INUT";
    }
    else{
        if(p>=81 && p<=100){
            cout<<"VERY GOOD";
        }

        else if(p>=61 && p<=80){
            cout<<"GOOD";
        }

        else if(p>=41  && p<=60){
            cout<<"AVERAGE";
        }

        else if(p<=40 ){
            cout<<"FAIL";
        }
        else{
            cout<<"INVALID INPUT ";
        }
    }

    cout<<endl;
    cout<<"---------------------------------END------------------------------------------------------------------";
}