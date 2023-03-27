"""
You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Input: start = [1,3,5,8], finish = [2,4,7,9]
Input: start = [10,12,20], finish = [20,25,30]
Output: 4
Output: 0 2
"""

# Assumption 1: - The activities are sorted by their start and finish time respectively

def getActivities(start, finish):
    n = len(start)
    i = 0
    print(i, end=" ")
    for j in range(1, n):
        if start[j] >= finish[i]:
            print(j, end=" ")
            i = j
# Expalinantion to the given code is plain and simple.
"""
1. We start with the first activity and print it's index.
2. We iterate over the rest of the activities and check if the start time of the current activity is greater than or equal to the finish time of the previous activity.
3. If it is, then we print the index of the current activity and update the previous activity to the current activity.
4. We repeat this process until we reach the end of the array.

"""

start_ar = list(map(int, input().split()))
end_ar = list(map(int, input().split()))
getActivities(start_ar, end_ar)