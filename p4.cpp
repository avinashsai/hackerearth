#include <iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<stack>
#include<queue>
#include<math.h>
#include<string.h>
using namespace std;
int a[10000],b[10000];  
class graph
{
    int v;
    list<int>*adj;
    void dfsutil(int u,bool visited[],int &sum1,int &max,int &sum2);
    public:
    graph(int v);
    void addedge(int u,int w);
    void dfs(int v);
};
graph::graph(int v)
{
    adj=new list<int>[v];
    this->v=v;
}
void graph::addedge(int u,int w)
{
    adj[u].push_back(w);
}
void graph::dfsutil(int u,bool visited[],int &sum1,int &max,int &sum2)
{
    visited[u]=true;
    list<int>::iterator i;
    for(i=adj[u].begin();i!=adj[u].end();i++)
    {
        if(!visited[*i])
        {
            if(a[*i]>sum1)
            {
                sum1=a[*i];max=*i;
            }
            else
            sum2=sum2+a[*i];
            dfsutil(*i,visited,sum1,max,sum2);
        }
    }
}
void graph::dfs(int n)
{
    bool visited[n],j=0,sum_k=0,sum_i=0;
    memset(visited,false,n);
    for(int i=0;i<n;i++)
    {
        if(!visited[i]){
            int sum1=a[i],max=i,sum2=a[i];
        dfsutil(i,visited,sum1,max,sum2);
        sum_k+=sum1,sum_i+=sum2;
        b[j++]=max+1;
    }
}
    cout<<sum_k<<" "<<sum_i<<endl;
    for(int i=0;i<j;i++)
    cout<<b[i]<<" ";
}
int main()
{
    int no,n,q,i,j;
    cin>>n>>q;
    for(i=0;i<n;i++)
    cin>>a[i];
    graph g(n);
    while(q--)
    {
        cin>>i>>j;
        g.addedge(i-1,j-1);
    }
    g.dfs(0);
    return 0;
}
