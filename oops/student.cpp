#include<iostream>
using namespace std;

class student{
    private:
    string name;
    string section;
    int roll;

    public:
    //non-parameter 
    // student(){
    //     name="himanshu";
    //     section="A";
    // }
     //parameter 
    // student(int roll){
    //    this-> roll=roll;
    // }
    void input(){
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter section:"<<endl;
        cin>>section;
        cout<<"enter roll:";
        cin>>roll;
    }
    void display(){
        cout<<"NAME:"<<name<<endl;
         cout<<"SECTION:"<<section<<endl;
          cout<<"ROLL:"<<roll<<endl;
    }
    void result(){
        input();
        display();
    }
};
class account{
    private:
    string account_id;
    string username;
    float balance;
    string password;

    public:
    void input(){
        cout<<"enter account id:"<<endl;
        cin>>account_id;
        cout<<"user name:"<<endl;
        cin>>username;
        cout<<"enter balance:"<<endl;
        cin>>balance;
        cout<<"enter password:"<<endl;
        cin>>password;
    }
    void display(){
        cout<<"account id:"<<account_id<<endl;
        cout<<"username:"<<username<<endl;
        cout<<"balance:"<<balance<<endl;
        cout<<"password:"<<password<<endl;
    }
    void result(){
        input();
        display();
    }

};

int main(){
    student a;
    a.input();
    account b;
    b.input();
    a.display();
    b.display();
        // a.result();
    // account p;
    // p.result();
    // student t2(a);
    // t2.result();
    return 0;
    // 56:05
}