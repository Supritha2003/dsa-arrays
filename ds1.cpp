#include<iostream>
using namespace std;

int main()
{

	int i,j,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
	
		if(a[j]<a[i])
		{
		int temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		}

		}	
			cout<<a[i]<<" ";
		
	
	}
	cout<<"\n"<<a[n-1];
	return 0;
}


