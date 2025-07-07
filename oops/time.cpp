#include<iostream>
using namespace std;
class time{
    private:
    int hour,minute;
    public:
    void getime(){
        cout<<"enter hour:-"<<endl;
        cin>>hour;
        cout<<"enter minutes:-"<<endl;
        cin>>minute;
    }
    void outime(){
        cout<<"HOUR IS:----"<<hour<<endl;
        cout<<"MINUTES IS:----"<<minute<<endl;
    }
    void sum(time t1,time t2);
};
    void time::sum(time t1,time t2){
        minute=t1.minute + t2.minute;
        hour=minute/60;
        minute=minute%60;
        hour=hour+t1.hour+t2.hour;
    }
int main(){
    time t1,t2,t3;
    t1.getime();
    t2.getime();
    t3.sum(t1,t2);
    t1.outime();
    t2.outime();
    cout<<"\n after addition of time"<<endl;
    t3.outime();
    return 0;
}
  