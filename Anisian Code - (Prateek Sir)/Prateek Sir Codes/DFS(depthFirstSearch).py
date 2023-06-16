# your code goes here
from collections import defaultdict


class Graph:
	def __init__(self):
		self.graph = defaultdict(list)

	def add_edge(self, u, v):
		self.graph[u].append(v)
		# self.graph[v].append(u)

	def helper(self, v, visited):
		visited.add(v)
		print(v, end=" ")
		for i in self.graph[v]:
			if i not in visited:
				self.helper(i, visited)

	def DFS(self):
		visited = set()
		for i in range(len(self.graph)):
			if i not in visited:
				self.helper(i, visited)


graph = Graph()
graph.add_edge(0, 1)
graph.add_edge(2, 0)
# graph.add_edge(0,3)
# graph.add_edge(1,2)
graph.add_edge(1, 3)
graph.add_edge(2, 4)
# graph.add_edge(2,3)
graph.DFS()
