#include<iostream>
using namespace std;
int BSI(int l,int h,int k,int a[])
{
		while(l<=h)
	{
       int mid=(l+h)/2;
		if(a[mid]==k)
		{
			return mid;
		}
	    else if(a[mid]>k)
		{
			h=mid-1;
		}
		else
		{
			l=mid+1; 	
		} 
	}
	return -1;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<BSI(0,n-1,k,a);
	return 0;
}
