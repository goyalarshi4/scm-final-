#include <iostream>
using namespace std ;
int main()
{
	int arr[10],i;
	for(i=0;i<9;i=i+1)
	{
		cout<<"enter" <<i+1<<"student marks";
		cin>>arr[i];
		
	}
	for(i=0;i<=10;i=i+1)
	{
		cout<<arr[i];
	}
}
