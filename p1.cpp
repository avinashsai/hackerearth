#include<iostream>
#include<vector>
#define ll long long int
using namespace std;
int main()
{
	ll no,n,i,j;
	cin>>no;
	while(no--)
	{
		cin>>n;
		vector<ll> a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		i=0,j=n-1;
		ll c1=0,c2=0;
		while(i<j)
		{
			if(a[i]<2*a[j])
              {
              	a[j]=a[j]-(a[i]/2);
              	i++;
              	c1++;
              }
              else if(a[i]>2*a[j])
              {
              	a[i]=a[i]-2*a[j];
              	j--;
              	c2++;
              }
              else
              {
              	i++;
              	j--;
              	c1++,c2++;
              }
		}
		if(!c1)
			c1=1;
		if(!c2)
			c2=1;
		cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}