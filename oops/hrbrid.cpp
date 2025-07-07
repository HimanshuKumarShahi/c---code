
#include<iostream>
using namespace std;
class student{
    public:
    char name[15];
    int roll_no;
    student()
    {
        cout<<"please enter your name:"<<endl;
        cin>>name;
        cout<<"please enter your roll number:"<<endl;
        cin>>roll_no;
    }
};
class marks:public student
{
    public:
    int marks1,marks2,marks3;
    marks()
    {
        cout<<"enter your marks1="<<endl;
        cin>>marks1;
        cout<<"enter your marks2="<<endl;
        cin>>marks2;
        cout<<"enter your marks3="<<endl;
        cin>>marks3;
    }
    void show()
    {
        cout<<"your name is :"<<name<<endl;
        cout<<"your Roll_ number is :"<<roll_no<<endl;
        cout<<"your marks 1 is:"<<marks1<<endl;
        cout<<"your marks 2 is:"<<marks2<<endl;
        cout<<"your marks 3 is:"<<marks3<<endl;
    }
};
class sport
{
    public:
    int sport_marks;
    sport()
    {
        cout<<"please enter your sport marks:"<<endl;
        cin>>sport_marks;
    }
};
class output:public marks ,public sport
{
    public:
    void display()
    {
        cout<<"your total marks without sport marks is:"<<marks1+marks2+marks3<<endl;
        cout<<"your total marks with sport marks is:"<<marks1+marks2+marks3+sport_marks<<endl;
        cout<<"your average marks without sport marks is:"<<(marks1+marks2+marks3)/3<<endl;
        cout<<"your average  marks with sport marks is:"<<(marks1+marks2+marks3+sport_marks)/4<<endl;
    }
};
int main()
{
    output obj;
    obj.show();
    obj.display();
    cout<<"thank you for chosing me !!";
    return 0;
}