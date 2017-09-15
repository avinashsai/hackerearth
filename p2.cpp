#include<iostream>
#include<vector>
#define ll long long int
using namespace std;
vector<bool>a(1000001);
vector<int>b(1000001);
void prime()
{
	int i,j;
	memset(a,true,sizeof(a));
	a[1]=false;
	for(i=2;i*i<=100000;i++)
	{
		if(a[i]==true)
		{
			for(j=2*i;j<=1000000;j=j+i)
				a[j]=false;
		}
	}
}
int main()
{
	ll l,r,no,n;
	prime();
	cin>>no;
	while(no--)
	{
		cin>>l>>r;
	}
	return 0;
}