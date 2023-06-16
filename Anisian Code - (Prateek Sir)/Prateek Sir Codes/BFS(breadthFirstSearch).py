# your code goes here
from collections import defaultdict


class Graph:
	def __init__(self):
		self.graph = defaultdict(list)

	def add_edge(self, u, v):
		self.graph[u].append(v)
		# self.graph[v].append(u)

	def BFS(self, s):
		vis = set()
		queue = []

		queue.append(s)
		vis.add(s)
		while queue:
			s = queue.pop(0)
			print(s, end=" ")
			for i in self.graph[s]:
				if i not in vis:
					queue.append(i)
					vis.add(i)


graph = Graph()
graph.add_edge(0, 1)
graph.add_edge(2, 0)
# graph.add_edge(0,3)
# graph.add_edge(1,2)
graph.add_edge(1, 3)
graph.add_edge(2, 4)
# graph.add_edge(2,3)
graph.BFS(2)
