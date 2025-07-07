#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int sum=0;
    // for(int i=1;i<=n;i++)
    // {
    //     sum=sum+i;
    // }
    //  cout<<sum<< endl;

    // while (n>0){
    //     cout<<n<<endl;
    //     cin>>n;
    // }

    do
    {
       cout<<n<<endl;
       cin>>n;
    } while (n>0);
    return 0;
}
