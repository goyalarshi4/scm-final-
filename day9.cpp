#include <iostream>
using namespace std;
main()
{
	int i, b=0,c=0,d=0,a[10],j,k;
	
	for(i=0;i<=9;i=i+1)
	{
		cout<<"enter"<<i+1<<"marks of students=";
		cin>>a[i];
		
		
	}
	for(j=0;j<=9;j=j+1)
	{
		if(a[j]>b)
		{
			d=c;
			c=b;
			b=a[j];
		}
		
		else
		{
			if(a[j]>c)
			{
				d=c;
				c=a[j];
			}
			else
			{
				
			
			
				if(a[j]>d)
				{
					d=a[j];
				}
			
		}
		
		}
		
		
		
	
	}
	cout<<b;
	cout<<c;
	cout<<d;
}
