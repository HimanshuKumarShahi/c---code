#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"input 2 number";
    cin>>x>>y;

    char cos;
    cout<<"input operator";
    cin>>cos;
    switch (cos)
    {
    case '+':
       cout<<x+y;
        break;
         case '-':
       cout<<x-y;
        break;
         case '*':
       cout<<x*y;
        break;
         case '/':
       cout<<x/y;
        break;
    
    default:
    cout<<"not possible";
        break;
    }
    return 0;
}