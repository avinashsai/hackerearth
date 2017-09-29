#include <iostream>
#include<vector>
#include<stdlib.h>
#define ll long long int
using namespace std;
ll count(ll n)
{
    ll c=0;
    while(n%2==0)
    {
        c++;
        n=n/2;
    }
    return c;
}
int main()
{
    ll no,n,i,c;
    cin>>no;
    while(no--)
    {
        cin>>n;
        vector<ll>a(n);
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            c=c+count(a[i]);
        }
        if(c%2==1)
        cout<<"Charlie";
        else
        cout<<"Alan";
        cout<<endl;
    }
    return 0;
}
