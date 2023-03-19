#include<iostream>
using namespace std;

int main()
{
	int temp;
	float b;
	cout<<"enter 1 to convert ceclcius to farenhight & 2 to convert farenhight  to celcius";
	cin>>temp;
	if(temp==1)
	{
		cout<<"enter celcius";
		cin>>b;
		cout<<"the temp in farenhight is "<<b*1.8+32;
		
	}
	else 
	{
	cout<<"enter farenhight";
	cin>>b;
	cout<<"the temp in farenhight is "<<b/1.8-32;
	}
		
		return 0;
}
