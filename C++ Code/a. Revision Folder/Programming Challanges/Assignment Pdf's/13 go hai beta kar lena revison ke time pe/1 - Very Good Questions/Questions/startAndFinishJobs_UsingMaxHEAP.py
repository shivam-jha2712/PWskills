"""
You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Input: start = [1,3,0,5,8,5], finish = [2,4,6,7,9,9]
Output: 4
"""

# Assumption 2: The activities are not in any sorted by their start and finish time respectively

from heapq import heappush, heappop 

def getActivities(start, finish):
    ans = []
    heap = []


# zip basically creates a list of tuples, where the i-th tuple contains the i-th element from each of the argument sequences or iterables.
# The returned list is truncated in length to the length of the shortest argument sequence.
# https://docs.python.org/3/library/functions.html#zip

    for i,j in zip(start,finish):
        heappush(heap, (j,i))
        # Here we are pushing the finish time and start time in the heap and we are doing this because we know that the finish time will always be greater than the start time. 
        # So, we are pushing the finish time first and then the start time. beacuse that implies that once we compelete one task then only we can move to the second
    it = heappop(heap)
    start, end = it[1], it[0]
    ans.append(it)

    while heap:
        it = heappop(heap)
        if it[1] >= end:
            start, end = it[1], it[0]
            ans.append(it)

    for e, s in ans:
        print((s, e), end="")

start_ar = list(map(int, input().split()))
end_ar = list(map(int, input().split()))
getActivities(start_ar, end_ar)

    