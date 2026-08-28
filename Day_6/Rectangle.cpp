#include<iostream>
using namespace std;
int main(){
    int l, b, area , perimeter;
    cout<<"Enter the length of rectangle : ";
    cin>>l;
    cout<<"Enter the breath of rectangle : ";
    cin>>b;
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"Area of rectangle is greater than Perimeter of rectangle";
    }
    else{
        cout<<"Perimeter of rectangle is greater than area of rectangle";
    }
}