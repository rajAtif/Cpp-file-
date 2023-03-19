
#include<iostream>
using namespace std;
int main()
{
int k=0;
for(int i=1; i<=6; i++)
{
	for(int space=1; space<(6-i); space++)
		cout<<"  ";
		while(k!=(2*i-1))
		{
			cout<<"* ";
			k++;
			}	
			k=0;
			cout<<endl;
}
cout<<endl;
return 0;	
}
