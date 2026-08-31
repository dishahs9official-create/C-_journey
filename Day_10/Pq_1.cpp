#include<iostream>
using namespace std;
int main(){
    int x = 3 , y , z;
    y = x = 10;           // HERE we for right to left
    z = x < 10;                // x<10 means here  10<10?....answer is false....z=false which is zero 
    cout<<x<<" "<<y<<" "<<z;     // 10 10 0
}