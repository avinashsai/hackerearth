#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#define ll long long int
using namespace std;
ll s1[1000000],s2[1000000];
int main()
{
	ll a[100],n,i,j,k,res=0,lo,hi,t=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		for(k=0;k<n;k++){
   			if(a[k]==0)
   				continue;
   			s1[t]=(a[k]*(a[i]+a[j])));
   			s2[t++]=((a[k]*(a[i]+a[j])));
   		}
   	}
   }
  sort(s1,s1+t);
  sort(s2,s2+t);
  
  for (int i=0;i<t;i++)
    {
        lo=lower_bound(0,t,s1[i])-0;
        hi=upper_bound(0,t,s1[i])-0;
        res+=(hi-lo);
    }
    printf("%lld\n",res);

}