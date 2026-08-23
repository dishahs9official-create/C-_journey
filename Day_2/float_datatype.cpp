#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    float x = 10;
    cout<<x<<endl;
    cout<< typeid(x).name();
    return 0;
}