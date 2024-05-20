#include<iostream>
using namespace std;

int main()
{
	int slarge;
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
			cout<<"\n"<<a[n-2];
cout<<"\n"<<a[1];
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
void get(int arr[],int n)
{
	if(n==0 || n==1)
	cout<<-1<<"-1"<<endl;
	sort(arr,arr+n);
	int small=arr[1];
	int large= arr[n-2];
	cout<<"second"<<small;
	cout<<"large"<<large<<endl;
}



int main()
{
	int arr[]={1,2,4,5};
	/*int i,j,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];*/
	int n=sizeof(arr)/sizeof(arr[0]);
	get(arr,n);
	return 0;
	
}


