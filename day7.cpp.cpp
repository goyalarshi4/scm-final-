#include <iostream>
using namespace std;
main()
{
	int i,j,n=1;
	for(i=1;i<=3;i=i+1)
	{
		for(j=1;j<=i;j=j+1)
		{
			cout<<n;
			n=n+1;
		}
		cout<<"\n";
	}
	
}
