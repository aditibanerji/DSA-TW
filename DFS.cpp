#include<iostream>
#include<vector>
using namespace std;

/*
         BEST,AVG,WORST = O(v+e)
*/

void addedge(vector<int>adj[] , int v ,int e)
{
    adj[v].push_back(e);
    adj[e].push_back(v);
}
void DFS(vector<int>adj[] , int s , bool visited[])
{
    visited[s] = true;
    cout<<s<<" ";

    for(int u:adj[s])
    {
        if(visited[u]==false)
        {
            DFS(adj,u,visited);
        }
    }
}
int main()
{
    int v,e,s;
    cout<<"enter no of vertices"<<endl;
    cin>>v;

    vector<int>adj[v];
    bool visited[v];

    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }

    char ch='y';

    while(ch=='y')
    {
        cout<<"enter edge from and to :"<<endl;
        cin>>v>>e;
        addedge(adj,v,e);
        cout<<"do you wish to continue y or no"<<endl;
        cin>>ch;
    }

    cout<<"enter source element"<<endl;
    cin>>s;

    DFS(adj,s,visited);

    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            DFS(adj,i,visited);
        }
    }
}