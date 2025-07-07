#include<iostream>
#include<string>
using namespace std;

    class teacher{
        private:
        char name[20];
        char dept[20];
        char subject[20];
        float salary;

        public:
        void read(){
            cout<<"enter name:--"<<endl;
                cin>>name;
             cout<<"enter dept:--"<<endl;
                cin>>dept;
              cout<<"enter subject:--"<<endl;
                cin>>subject;
               cout<<"enter salary"<<endl;
               cin>>salary;
        }
        void display(){
            cout<<"name:"<<name<<endl;
             cout<<"dept:"<<dept<<endl;
              cout<<"subject:"<<subject<<endl;
               cout<<"salary:"<<salary<<endl;
        } 
       void txt(){
         read();
         display();
       }
    };

int main(){

    teacher t1;
    // object.read();
    // object.display();
    //  object.read();
    // object.display();
    //  object.read();
    // object.display();
    t1.txt();
   teacher t2;
   t2.txt();
    return 0;
}