#include<iostream>
using namespace std;
   
int main(){
    int l,b;
    float r;
    cout<<"Enter the value of radius:  "<<endl;
        cin>>r;
        cout<<"The area of circle is :__"<<(22/7)*r*r<<endl;
       cout<<"Enter the value of length of rectangle:"<<endl;
        cin>>l;
       cout<<"Enter the value of bredth of rectangle:"<<endl;
        cin>>b;
        cout<<"The area of rectangle is :__"<<l*b<<endl;
        cout<<"The area of shaded resion in rectangle :__"<<(l*b)-(3.14*r*r);
     return 0;
}