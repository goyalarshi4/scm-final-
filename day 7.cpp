#include <iostream>
using namespace std;
main()
{
	int a,b,c,n=0,i=0;
	cin>>a;
	
	for(i=1;i<=a;i=i+1)
	{
	c=c*10+i;
	n=n+c;
	cout<<c;
	
	if(i<a)
	{
		cout<<"+";
		
	}
	else
	{
		cout<<"=";
	}
	

	}
		cout<<n;	
}
