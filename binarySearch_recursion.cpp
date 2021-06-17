#include<iostream>
using namespace std;
int BSR(int l,int h,int k,int a[])
{
    int mid=(l+h)/2;
	if(l>h)
	{
	    return -1;
	}
	if(a[mid]==k)
	{
	    return mid;
	}
	else if(a[mid]>k)
	{
	    return BSR(l,mid-1,k,a);
	}
	else
	return BSR(mid+1,h,k,a);
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<BSR(0,n-1,k,a);
	return 0;
}
