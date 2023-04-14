// Program to print BFS traversal from a given
// source vertex. BFS(int s) traverses vertices
// reachable from s.
#include<bits/stdc++.h>
using namespace std;

// This class represents a directed graph using
// adjacency list representation
class Graph
{
	int V; // No. of vertices

	// Pointer to an array containing adjacency
	// lists
	vector<list<int>> adj;
public:
	Graph(int V); // Constructor

	// function to add an edge to graph
	void addEdge(int v, int w);

	// prints BFS traversal from a given source s
	void BFS(int s);
	void DFS(int s);
	bool detectCycle(int x,int parent);
};

Graph::Graph(int V)
{
	this->V = V;
	adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

/*void Graph::BFS(int s)
{
	// Mark all the vertices as not visited
	vector<bool> visited;
	visited.resize(V,false);

	// Create a queue for BFS
	list<int> queue;

	// Mark the current node as visited and enqueue it
	visited[s] = true;
	queue.push_back(s);

	while(!queue.empty())
	{
		// Dequeue a vertex from queue and print it
		s = queue.front();
		cout << s << " ";
		queue.pop_front();

		// Get all adjacent vertices of the dequeued
		// vertex s. If a adjacent has not been visited,
		// then mark it visited and enqueue it
		for (auto adjecent: adj[s])
		{
			if (!visited[adjecent])
			{
				visited[adjecent] = true;
				queue.push_back(adjecent);
			}
		}
	}
}*/
vector<bool> visited;
void Graph:: BFS(int s)
{
	vector<bool> visited;
	queue<int> list;
	visited.resize(V,false);
	visited[s]=true;
	list.push(s);
	while (!list.empty())
	{
		s = list.front();
		cout<<" "<<s<<" ";
		list.pop();
		for (auto adjacent: adj[s])
		{
			if(visited[adjacent] != true)
			{
				visited[adjacent] =true;
				list.push(adjacent);
			}
		}
		
	}
	

}

void Graph:: DFS(int s)
{
	vector<bool> visited(V,false);
	stack<int> st;
	st.push(s);
	visited[s] = true;
	while (!st.empty())
	{
		int temp = st.top();
		st.pop();
		cout<<temp<<" ";
		for(auto i: adj[temp])
		{
			if(visited[i]!=true)
			{
			st.push(i);
			visited[i]=true;
			}
		}
	}	
}

bool Graph:: detectCycle(int x,int parent)
{
	visited[x]=true;
	for(int j: adj[x])
	{
		if(j==parent)
		{
			continue;
		}
		if(visited[j])
			return true;
		return detectCycle(j,x);
	}
	return false;
}


// Driver program to test methods of graph class
int main()
{
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(1, 0);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 1);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 2);
	int s;
	cout<<"Enter node to start BFS traversal: ";
	cin>>s;
	cout << "Following is Breadth First Traversal "
		<< s<<endl;
	g.BFS(s);
	cout<<"Enter node to start DFS traversal: ";
	cin>>s;
	cout << "Following is Depth First Traversal "
		<< s<<endl;
	g.DFS(s);
	cout<<"\ncontains cycle: "<<g.detectCycle(0,-1)<<endl;

	return 0;
}