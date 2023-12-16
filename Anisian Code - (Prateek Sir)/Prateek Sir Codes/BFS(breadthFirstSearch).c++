#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    vector<list<int>> adj;

public:
    Graph(int V);
    void addEdge(int u, int v);
    void BFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
}

void Graph::BFS(int s)
{
    vector<bool> visited;
    visited.resize(V, false);
    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    while (!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
        for (auto x : adj[s])
        {
            if (!visited[x])
            {
                visited[x] = true;
                queue.push_back(x);
            }
        }
    }
}

int main()
{
    int V = 4;
    Graph g(V);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.BFS(0);
    return 0;
}