#include<iostream>
#include<stdio.h>
#include<string.h>
#define ll long long int
using namespace std;
bool square(ll n)
{
ll l=1,m,h=n;
while(l<=h)
{
m=(l+h)/2;
if(m*m==n)
return 1;
else if(m*m>n)
h=m-1;
else
l=m+1;
}
return 0;
}
int main()
{
ll no,j=1,i,n,m,sum;
cin>>no;
while(j<=no)
{
cin>>n>>m;
sum=1;
for(i=2;i*i<n;i++)
{
if(n%i==0)
{
sum=(sum+i)%m;
sum=(sum+n/i)%m;
}}
if(n%i==0&&n/i==i)
sum=(sum+i)%m;
ll c=1;
for(i=2;i*i<n;i++)
if(n%i==0)
c=c+2;
if(n%i==0&&n/i==i)
c++;
cout<<"Case"<<" "<<"#"<<j<<" "<<":"<<" ";
if(square(5*c*c+4)||square(5*c*c-4))
cout<<"YES.";
else
cout<<"NO.";
cout<<endl;
j++;
}
return 0;
}
