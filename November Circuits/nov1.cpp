#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long int
#define s 1000000007
using namespace std;
vector<ll>a(1000000);
int main()
{
    ll no,p,n,i,u=3,c=1;
    a[1]=4;
    for(i=2;i<=1000000;i++)
    {
        c=u%s;
        u=(u*3)%s;
        a[i]=(a[i-1]+c+u)%s;
    }
    scanf("%lld",&no);
    while(no--)
    {
        scanf("%lld",&n);
       printf("%lld\n",(a[n]+1)%s);
    }
    return 0;
}