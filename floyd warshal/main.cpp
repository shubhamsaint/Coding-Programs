#include <iostream>
#include<stdio.h>
using namespace std;

typedef long long int ll;

#define V 1000
#define INF 99999

int graph[V][V];
int dist[V][V];
void floydWarshall(int P)
{
int i,j,k;

for(i=0;i<P;i++)
    for(j=0;j<P;j++)
    dist[i][j]=graph[i][j];

for(k=0;k<P;k++)
for(i=0;i<P;i++)
    for(j=0;j<P;j++)
{
    if(dist[i][j]>dist[i][k]+dist[k][j])
        dist[i][j]=dist[i][k]+dist[k][j];
}
}


int main()
{

    int n,m,q;
    int a,b,l;
    cin>>n>>m;


 for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph[i][j]=INF;
        }
    }
    while(m--)
    {
        cin>>a>>b>>l;
        graph[a-1][b-1]=l;

    }
    floydWarshall(n);
    cin>>q;



    while(q--)
    {
        cin>>a>>b;
if(dist[a-1][b-1]==INF) dist[a-1][b-1]=-1;
        cout<<dist[a-1][b-1]<<"\n";
    }
    return 0;

}

