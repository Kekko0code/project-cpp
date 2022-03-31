 #include <iostream>
using namespace std;
int main()
{
    start:
    int scelta;
    string go;
    string pc;

    cout<<"scegli carta : 1 "<<endl <<"sasso : 2 "<<endl <<"forbice : 3 "<<endl;
    cin>>scelta;
    switch (scelta)
    {
        case 1:
            pc = "forbice";
            cout<<"hai perso il pc ha scelto "<<pc<<endl;
            break;
        case 2:
            pc = "carta";
            cout<<"hai perso il pc ha scelto "<<pc<<endl;
            break;
        case 3:
            pc = "sasso";
            cout<<"il pc ha scelto "<<pc<<endl;
            break;
        default:
            cout<<"ERROR 404 not faund "<<endl;
            break;
        
    }
    cout<<"vuoi giocare ancora s/n "<<endl;
    cin>>go;
    if (go=="s" or go=="S")
    {
        goto start;
    }
    else
    {
        cout<<"ok arrivederci ";
    }
    return 0;
}
