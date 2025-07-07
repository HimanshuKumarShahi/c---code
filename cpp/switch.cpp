#include<iostream>
using namespace std;
    int main(){
        char button;
        cout<<"input your character";
        cin>>button;

        // if (button=='a')
        // {
        //    cout<<"hello ji";
        // }
        // else if (button=='b')
        // {
        //     cout<<"good morning";
        // }
        //  else if (button=='c')
        // {
        //     cout<<"hola";
        // }
        //  else if (button=='d')
        // {
        //     cout<<"bkl";
        // }
        //  else if (button=='e')
        // {
        //     cout<<"hupppo";
        // }
        // else{
        //     cout<<"i still learning ";
        // }

        switch (button)
        {
        case 'a':
           cout<<"hello ji"<<endl;
            break;
             case 'b':
           cout<<"hola"<<endl;
            break;
             case 'c':
           cout<<"agg ka gola"<<endl;
            break;
             case 'd':
           cout<<"pussi"<<endl;
            break;
             case 'e':
           cout<<"kiss"<<endl;
            break;
        default:
        cout<<"i am still learning ";
        break;
        }
        return 0;
    }