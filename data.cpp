#include <iostream>
using namespace std;
int main()
{
    int dd,mm;
    cout<<"questo programma ti dira il nome del giorno in base a una data disposizione: dd : mm"<<endl;
    cin>>dd;
    cin>>mm;
    switch(dd)
    {
        case 1:
            cout<<"lunedi "<<endl;
            break;
        case 2:
            cout<<"martedi "<<endl;
            break;
        case 3:
            cout<<"mercoledi "<<endl;
            break;
        case 4:
            cout<<"giovedi "<<endl;
            break;
        case 5:
            cout<<"venerdi "<<endl;
            break;
        case 6:
            cout<<"sabato "<<endl;
            break;
        case 7:
            cout<<"domenica "<<endl;
            break;
        case 8:
            cout<<"lunedi "<<endl;
            break;
        case 9:
            cout<<"martedi "<<endl;
            break;
        case 10:
            cout<<"mercoledi "<<endl;
            break;
        case 11:
            cout<<"giovedi "<<endl;
            break;
        case 12:
            cout<<"venerdi "<<endl;
            break;
        case 13:
            cout<<"sabato "<<endl;
            break;
        case 14:
            cout<<"domenica "<<endl;
            break;
        case 15:
            cout<<"lunedi "<<endl;
            break;
        case 16:
            cout<<"martedi "<<endl;
            break;
        case 17:
            cout<<"mercoledi "<<endl;
            break;
        case 18:
            cout<<"giovedi "<<endl;
            break;
        case 19:
            cout<<"venerdi "<<endl;
            break;
        case 20:
            cout<<"sabato "<<endl;
            break;
        case 21:
            cout<<"domenica "<<endl;
            break;
        case 22:
            cout<<"lunedi "<<endl;
            break;
        case 23:
            cout<<"martedi "<<endl;
            break;
        case 24:
            cout<<"mercoledi "<<endl;
            break;
        case 25:
            cout<<"giovedi "<<endl;
            break;
        case 26:
            cout<<"venerdi "<<endl;
            break;
        case 27:
            cout<<"sabato "<<endl;
            break;
        case 30:
            cout<<"domenica "<<endl;
            break;
        case 31:
            cout<<"lunedi "<<endl;
            break;
        default:
            cout<<"giorno non trovato lista dei giorni 1-31 ";
            break;
    }
    switch(mm)
    {
        case 1:
            cout<<"gennaio "<<endl;
            break;
        case 2:
            cout<<"febbraio "<<endl;
            break;
        case 3:
            cout<<"marzo "<<endl;
            break;
        case 4:
            cout<<"aprile "<<endl;
            break;
        case 5:
            cout<<"maggio "<<endl;
            break;
        case 6:
            cout<<"giugno "<<endl;
            break;
        case 7:
            cout<<"luglioagosto  "<<endl;
            break;
        case 8:
            cout<<"agosto  "<<endl;
            break;
        case 9:
            cout<<"settembre "<<endl;
            break;
        case 10:
            cout<<"ottobre "<<endl;
            break;
        case 11:
            cout<<"novembre "<<endl;
            break;
        case 12:
            cout<<"dicembre "<<endl;
            break;
        default:
            cout<<"mese non torvato i numeri vanno da 1-12";
            break;
    }
	return 0;
}
