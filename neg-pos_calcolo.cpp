//clcola il numero dei numero pos e neg dati in imput 
#include <iostream>
using namespace std;
int main(){
    int c;
    cout<<"per cambiare colore del testo inserire:"<<endl;
    cout<<"2 per il verde "<<endl;
    cout<<"3 per il azzuro "<<endl;
    cout<<"4 per il rosso  "<<endl;
    cout<<"5 per il viola  "<<endl;  
    cout<<"0 per rimanere invariato "<<endl;
    cin>>c;
    switch (c)
    {
    case 2:
        system("color 2");
        break;
    case 3:
        system("color 3");
        break;
    case 4:
        system("color 4");
        break;
    case 5:
        system("color 5");
        break;
    }
    start:
    string r;
    float N;
    int pos,neg,nc,i;
    cout<<"quante volte vuoi inserire N ? "<<endl;
    cin>>nc;
    pos = 0;
    neg = 0;
    i = 1;
    nc = nc + 1;
    while(i<nc){
        cout<<"inserisci N per la "<<i<<" volta"<<endl;
        i = i + 1;
        cin>>N;
        if(N > 0){
            pos = pos + 1;
        }
        else{
            neg = neg + 1; 
        }
    }
    cout<<"i numeri positivi inseriti sono "<<pos<<endl;
    cout<<"i numeri negativi inseriti sono "<<neg<<endl;
    cout<<endl<<"vuoi riavviare il programma ? y/n "<<endl;   
    cin>>r;
    if(r=="y"){
        system("cls");
        goto start;
    }     
    system("pause");
    return 0;
}
