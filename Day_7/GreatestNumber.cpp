// Take three positive integer input and print the greatest of them.

// #include<iostream>
// using namespace std;
// int main(){
//     int a , b , c ;
//     cout<<"Enter First number : ";
//     cin>>a;
//     cout<<"Enter Second number : ";
//     cin>>b;
//     cout<<"Enter Third number : ";
//     cin>>c;
//     if(a>b && a>c){

//         cout<<"A is Greatest number : "<<a;


//     }
//     if(b>a && b>c){
//         cout<<"B is Greatest number : "<<b;
//     }

//     if(c>a && c>b){
//         cout<<"C is Greatest number : "<<c;
//     }

// }


// =======================OR============================================================================



#include<iostream>
using namespace std;
int main(){
    int a , b , c ;
    cout<<"Enter First number : ";
    cin>>a;
    cout<<"Enter Second number : ";
    cin>>b;
    cout<<"Enter Third number : ";
    cin>>c;
    if(a>b && a>c){

        cout<<"A is Greatest number : "<<a;


    }
    else if(b>a && b>c){
        cout<<"B is Greatest number : "<<b;
    }
    

    else{
        cout<<"C is Greatest number : "<<c;
    }

}
