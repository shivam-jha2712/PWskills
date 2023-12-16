# your code goes here

# n = No. of vertices
# m = No. of edges
n,m = map(int,input().split())

adjMat = [[0 for i in range(n)] for j in range(n)]

for i in range(n):
	adjMat[i][i] = 1

for i in range(m):
	u,v = map(int,input().split())
	adjMat[u][v] = 1
	adjMat[v][u] = 1

for i in range(n):
	print(*adjMat[i])