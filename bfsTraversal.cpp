#include<bits/stdc++.h>
using namespace std;

//bfs traversal using queue


void addEdge(int n,int m,vector<int> adj[])
{
    adj[n].push_back(m);
    adj[m].push_back(n);
}

void bfs(vector<int> adj[],int s,int n)
{
    bool visited[n] = {false};
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(q.empty() == false)
    {
        int c = q.front();
        q.pop();
        cout << c << " ";

        for(auto x : adj[c])
        {
            if(visited[x] == false)
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}
void display(vector<int> adj[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        cout << i << "-> :";
        for(auto x : adj[i])
        {
            cout << x << " ";
        }
        cout << "" << endl;
    }
}
int main()
{
    vector<int> adj[6];

    addEdge(0,1,adj);
    addEdge(0,2,adj);
    addEdge(2,3,adj);
    addEdge(2,4,adj);
    addEdge(3,4,adj);
    addEdge(4,5,adj);
    bfs(adj,0,6);
    //display(adj,6);
    return 0;
}