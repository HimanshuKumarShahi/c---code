#include<iostream>
using namespace std;

class people{
    private:
    char name[10];
    int age,id;
    char address[20];


    public:
    void input();
    void output();
};
void people::input(){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age:"<<endl;
    cin>>age;
    cout<<"enter address:"<<endl;
    cin>>address;
    cout<<"enter id no:"<<endl;
    cin>>id;
}

void people::output(){
    cout<<"name is:"<<name<<endl;
    cout<<"age is:"<<age<<endl;
    cout<<"address is:"<<address<<endl;
      cout<<"enter id no:"<<id<<endl;
    cout<<"\n";
}
int main(){
    int n;
    cout<<"enter the no times u enter data:"<<endl;
    cin>>n;
    people p1[n];
    for(int i=1;i<=n;i++)
    {
        p1[i].input();
    }
    cout<<"----THE DATAS IS-----------"<<endl;
   for(int i=1;i<=n;i++)
    {
        p1[i].output();
    }
    return 0;
}
