/* Input number in int anda enter its half
*/

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    float y;
    y=(float)x;  // int to float
    cout<<y/2;
}