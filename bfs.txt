#include<bits/stdc++.h>
 
using namespace std;
 
int node,edge,mat[100][100];
char u,v;
 
int visit[100],dist[100];
 
void BFS(int source)
{
    queue<int> qq;
    qq.push(source);
 
    visit[source] =1;
    while(!qq.empty())
    {
        int currentNode = qq.front();
        for( int i=1; i<=node; i++ )
        {
            if( mat[currentNode][i] == 1 )
            {
                int nextNode = i;
                if( visit[nextNode] == 0 )
                {
                    dist[nextNode] = dist[currentNode] + 1 ;
                    visit[nextNode] = 1;
                    qq.push(nextNode);
                }
            }
        }
        qq.pop();
    }
    cout<<"For distance"<<endl;
    for( int i=1; i<=node; i++ )
    {
        cout<<i<<" "<<dist[i]<<"\n";
    }
    cout<<endl;
}
 
int main()
{
    cin>>node>>edge;
    map<char,int> mp;
    int k=1;
    for( int i=0; i<edge; i++)
    {
        cin>>u>>v;
        if( mp.find(u)  == mp.end() ) mp[u] = k++;
        if( mp.find(v)  == mp.end() ) mp[v] = k++;
 
        mat[mp[u]][mp[v]] = 1;
        mat[mp[v]][mp[u]] = 1;
    }
 
    for( auto x:mp)
        cout<<x.first<<" =>> "<<x.second<<endl;
 
    for( int i=1; i<=node; i++ )
    {
        for( int j=1; j<=node; j++ )
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    BFS(1);
    return 0;
}