#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter Cost Price : ";
    cin>>cp;
    cout<<"Enter Selling Price : ";
    cin>>sp;
    if(cp>sp){
        cout<<"Incurred Loss";
        cout<<endl;
        cout<<"Incurred Loss is : ₹";
        cout<<cp-sp;
    }
    else{
        cout<<"Gain profit";
        cout<<endl;
        cout<<"Gain Profit of : ₹";
        cout<<sp-cp;

    }

}