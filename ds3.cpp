#include<bits/stdc++.h>
using namespace std;
bool get(int arr[],int n)
{
	
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
	if(arr[i]>arr[j])
	return false;
}
}
	
	return true;

}


int main()
{
	int arr[]={5,8,2,1,9};
	/*int i,j,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];*/
	int n=sizeof(arr)/sizeof(arr[0]);
	bool ans=get(arr,n);
	if(ans) cout<<"true"<<endl;
	else cout<<"false"<<endl;
	//int n=sizeof(arr)/sizeof(arr[0]);
	get(arr,n);
	return 0;
	
}
