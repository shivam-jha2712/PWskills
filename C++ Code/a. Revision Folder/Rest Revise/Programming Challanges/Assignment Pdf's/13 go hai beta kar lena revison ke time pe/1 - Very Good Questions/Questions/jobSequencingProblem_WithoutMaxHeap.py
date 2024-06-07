## JOB SCHEDULING PROBLEM

## Not to mention their do exists certain other test cases which might give diffrent output so do keep them in check

# Dataset
"""
5 3
a 2 100
b 1 19
c 2 27
d 1 25
e 3 15

c a e
"""

"""
5 3
a 2 100
b 1 19
c 5 27
d 1 25
e 3 15

d a c
"""

# For the input
def cleanup(x):
    try:
        return int(x)
    except:
        return x


# getting jobs in the sorted order as per profits
def printJobScheduling(jobs, maxT):
    n = len(jobs)
    jobs.sort(key = lambda x: -x[2])
    
    
# Checking for a free slot
    result = [False]*maxT
    
# if Job result is a success or not (sequence of jobs)
    jobSeq = ['-1']* maxT
    
    
# iterate over all the jobs
    for i in range(n):
        # Finding a free slot for placing the job
        slot_start = min(maxT-1, jobs[i][1] - 1)
        for j in range(slot_start, -1, -1):
            # if slot is free
            if not result[j]:
                result[j] = True
                jobSeq[j] = jobs[i][0]
                break
    print(jobSeq)

ar = []
n , t = map(int, input().split())
for _ in range(n):
    tmp = list(input().split())
    tmp2 = list(map(cleanup, tmp))
    ar.append(tmp2)
printJobScheduling(ar,t)
    