#include <iostream>
using namespace std;
int main()
{
	start:
	int x;
	cin>>x;
	if(x==10)
	{
		cout<<"bravo";
	}
	else
	{
		goto start;
	}
	return 0;
}
