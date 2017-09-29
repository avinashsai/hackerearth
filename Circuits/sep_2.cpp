#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <string.h>
#define ll long long int
using namespace std;
int b[100000];
void count(ll n)
{
    ll i;
        ++b[n];
        for(i=2;i*i<n;i++){
        if(n%i==0)
        ++b[i],++b[n/i];
        }
        if(n/i==i&&n%i==0)
        ++b[i];
}
int main()
{
    ll n,q,l,i;
    for(i=1;i<=100000;i++)
    b[i]=0;
        cin>>n;
        vector<ll>a(n);
        for(i=0;i<n;i++){
        cin>>a[i];
         count(a[i]);
        }
        cin>>q;
        while(q--)
        {
            cin>>l;
            if(l==1)
            cout<<n<<endl;
            else
            cout<<b[l]<<endl;
        }
    return 0;
}