#include<iostream>
    using namespace std;
    int main(){

        int savings;
        cin>>savings;

        if(savings>5000){
            if(savings<15000){
                cout<<"road trip with Anamika";
            }
            else{
                cout<<" shoping with friends";
            }
           
        }
        else if(savings>2000){
            cout<<"Anamika";
        }
        else{
            cout<<"friends";
        }
    return 0;
    }