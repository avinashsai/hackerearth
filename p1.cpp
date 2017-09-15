#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
using namespace std;
int main()
{
ll x,y,k,n,i;
cin>>n>>k;
ll a[100000];
ll b[100000];
float c[100000];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
cin>>b[i];
for(i=0;i<n;i++)
c[i]=(sqrt((a[i]*a[i])+(b[i]*b[i])));
sort(c,c+n);
cout<<ceil(c[k-1]);
return 0;
}


