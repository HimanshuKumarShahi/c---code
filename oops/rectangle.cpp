#include<iostream>
using namespace std;

class rectangle{
    private:
    int l,b;

    public:
    void input();
    void result();
};
void rectangle::input(){
    cout<<"enter length and breadth:"<<endl;
    cin>>l>>b;
}
void rectangle::result(){
    cout<<"the area is:"<<l*b<<endl;
    cout<<"the perimeter is:"<<2*(l+b)<<endl;
}
int main(){
    rectangle p1;
    p1.input();
    p1.result();
}