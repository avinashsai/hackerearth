#include <iostream>
#include<vector>
#include<cstdlib>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
using namespace std;
int a[100001];
ll num(string s)
{
    ll n=0;
    for(int i=0;i<s.length();i++)
        n=n*10+(s[i]-'0');
    return n;
}
bool check(string b[],ll n)
{
    for(int i=0;i<n;i++)
    if(b[i]!="0")
    return 0;
    return 1;
}
bool compare(string x,string y)
{
    string xy=x.append(y);
    string yx=y.append(x);
    return xy.compare(yx)?1:0;
}
void seive()
{
    for(int i=0;i<=100001;i++)
    a[i]=0;
    a[0]=1;
    a[1]=1;
    for(int i=2;i*i<=100001;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*2;j<=100001;j=j+i)
            a[j]=1;
        }
    }
}
int main()
{
    seive();
    string s[100000],p;
    string b[100000];
    ll no,n,i,l,j;
    cin>>no;
    while(no--)
    {
        cin>>n;
        j=0;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            l=num(s[i]);
            if(a[l])
            b[j++]=s[i];
        }
        if(j!=0){
        sort(b,b+j,compare);
        if(check(b,j))
        cout<<"0"<<endl;
        else
        {
            for(i=0;i<j;i++)
            cout<<b[i];
            cout<<endl;
        }
        }
        else
        cout<<"No Secret Code!"<<endl;
    }
    return 0;
}
