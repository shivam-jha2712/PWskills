# cook your dish here
import heapq

problem = """
jobID   deadline    profit
b           1           19
d           1           25
a           2           100
c           2           27
e           3           15
"""


def cleanup(x):
    try:
        return int(x)
    except:
        return x


def printJobScheduling(jobs, maxT):
    n = len(jobs)

    jobs.sort(key=lambda x: x[1])
    # print(jobs)

    # intialize the result and maxHeap
    result = []
    maxHeap = []

    for i in range(n-1, -1, -1):
        if i == 0:
            slots_available = jobs[i][1]
        else:
            slots_available = jobs[i][1] - jobs[i-1][1]

        heapq.heappush(maxHeap, (-jobs[i][2], jobs[i][1], jobs[i][0]))

        while slots_available and maxHeap:
            profit, deadline, job_id = heapq.heappop(maxHeap)
            slots_available -= 1
            result.append([job_id, deadline])

    result.sort(key=lambda x: x[1])
    jobSeq = [x[0] for x in result]
    print(jobSeq)


ar = []
n, t = map(int, input().split())
for _ in range(n):
    tmp = list(input().split())
    tmp2 = list(map(cleanup, tmp))
    ar.append(tmp2)
printJobScheduling(ar, t)
