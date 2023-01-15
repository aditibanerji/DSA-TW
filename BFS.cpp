#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addedge(vector<int>adj[] , int v ,int e)
{
    adj[v].push_back(e);
    adj[e].push_back(v);
}
void printgraph(vector<int>adj[] , int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<"\nelement connected to "<<i<<" is :"<<endl;
        for(int x : adj[i])
        {
                cout<<x<<" ";
        }
    }
}

void BFS(vector<int>adj[] , int s, bool visited[])
{
      queue<int>q;
      visited[s]=true;
      q.push(s);

      int u;

      while(q.empty()==false)
      {
        u=q.front();
        q.pop();
        cout<<u<<" ";

        for(int x : adj[u])
        {
                if(visited[x]==false)
                {
                    visited[x]=true;
                    q.push(x);
                }
        }
      }

}

int main()
{
       int v,e,s;
       char ch='y';
       cout<<"enter no. of vertices\n";
       cin>>v;


       vector<int>adj[v];
       bool visited[v];

       for(int i=0;i<v;i++)
       {
        visited[i]=false;
       }

       while(ch=='y')
       {
        cout<<"enter edge to be stored from & to"<<endl;
        cin>>v>>e;
        addedge(adj,v,e);
        cout<<"do you wish to continue y or n?\n";
        cin>>ch;

       }

        cout<<"enter source element\n";
        cin>>s;

        printgraph(adj,v);

        cout<<"BFS Traversal :"<<endl;
        BFS(adj,s,visited);
}