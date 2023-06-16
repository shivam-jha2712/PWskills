# your code goes here
class AdjNode:
    def __init__(self, data):
        self.vertex = data
        self.next = None


class Graph:
    def __init__(self, vertices):
        self.vertices = vertices
        self.graph = [None] * self.vertices

    def add_edge(self, src, dest):
        node = AdjNode(dest)
        node.next = self.graph[src]
        self.graph[src] = node

        node = AdjNode(src)
        node.next = self.graph[dest]
        self.graph[dest] = node

    def print_graph(self):
        for i in range(self.vertices):
            print("Adjacency list of", i)
            temp = self.graph[i]
            print("head", end="->")
            while temp:
                print(temp.vertex, end="->")
                temp = temp.next
            print()


if __name__ == "__main__":
    V = 4
    graph = Graph(V)
    graph.add_edge(0, 1)
    graph.add_edge(0, 2)
    graph.add_edge(0, 3)
    graph.add_edge(1, 2)
    graph.add_edge(1, 3)
    graph.add_edge(2, 3)
    graph.print_graph()


# With Proper Order
'''
# your code goes here
from collections import defaultdict
def addEdge(adj,src,dest):
	adj[src].append(dest)
	adj[dest].append(src)

def printGraph(adj):
	for key,val in adj.items():
		print("Adjacency list of",key)
		for j in val:
			print(j,end="->")
		print()

V = 4
adj = defaultdict(list)
addEdge(adj,0,1)
addEdge(adj,0,2)
addEdge(adj,0,3)
addEdge(adj,1,2)
addEdge(adj,1,3)
addEdge(adj,2,3)
printGraph(adj)
'''
