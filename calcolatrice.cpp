#include <iostream>
using namespace std;
int main()
{
    start:
    float x,y;
    char op;
    string sn;
    cout<<"inserisci il primo operando.. "<<endl;
    cin>>x;
    cout<<"inserisci il secondo operando.. "<<endl;
    cin>>y;
    cout<<"inserisci il tuo operatore:+,/,*,-,% "<<endl;
    cin>>op;
    if(x==0 or y==0)
    {
        cout<<"ERRORE i operandi non possono essere 0 ";
        goto start;
    }
    switch(op)
    {
        case '+':
            cout<<x+y<<endl;
            break;
        case '-':
            cout<<x-y<<endl;
            break;
        case '/':
            cout<<x/y<<endl;
            break;
        case '*':
            cout<<x*y<<endl;
            break;
        default:
            cout<<" ERROR 404 not faund ";
            break;
    }
    cout<<"vuoi fare un nuovo calcolo s/n "<<endl;
    cin>>sn;
    if(sn=="S" or sn=="s")
    {
        system("cls");
        goto start;
        
    }
    return 0;
}
