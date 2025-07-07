#include<iostream>
using namespace std;
int main(){
        int x,y,z;
        cin>>x>>y>>z;
    if(x>y){
        if(x>z){
            cout<<x;
            cout<<"x is greater\n";
        }
        else{
            cout<<z;
            cout<<"z is greater\n";
        }
    }
    else{
        if(y>z){
            cout<<y;
            cout<<"y is greater\n";
        }
        else{
            cout<<z;
            cout<<"z is greater\n";
        }
    }

    return 0;
}