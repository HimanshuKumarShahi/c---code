#include<iostream>
#include<string>
using namespace std;
class Teacher
{
  public:
    string name;
    string dept;
    string subject;
    double salary;
    void changedept(string newdept)
    {
       dept = newdept; 
    }
};
int main()
{
    Teacher p1;
    p1.name ="himanshu";
     p1.dept="bca";
      p1.subject="com-sci";
      cout<<"The name is="<<p1.name<<endl;
       cout<<"The dept is="<<p1.dept<<endl;
        cout<<"The subject is="<<p1.subject<<endl;
    return 0;
}