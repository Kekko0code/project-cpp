#include <iostream>
using namespace std;
int main()
{
	start:
	int x;
	cout<<"inserisci il tuo voto e il programma ti dira la valutazione "<<endl;
	cin>>x;
	switch (x)
	{
	case 1:
		cout<<"insufficiente"<<endl;
		break;
	case 2:
		cout<<"insufficiente"<<endl;
		break;
	case 3:
		cout<<"insufficiente"<<endl;
		break;
	case 4:
		cout<<"insufficiente"<<endl;
		break;
	case 5:
		cout<<"mediocre"<<endl;
		break;
	case 6:
		cout<<"sufficiente"<<endl;
		break;
	case 7:
		cout<<"buono"<<endl;
		break;
	case 8:
		cout<<"molto buono"<<endl;
		break;
	case 9:
		cout<<"ottimo"<<endl;
		break;
	case 10:
		cout<<"eccelente"<<endl;
		break;
	default:
		cout<<"voto non calcolabbile"<<endl;
		break;
	}
	goto start;
	return 0;
}
