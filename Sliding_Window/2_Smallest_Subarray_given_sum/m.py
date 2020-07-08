"""
Given a array of positive numbers and a positive number S, find the length of the smallest
contiguous subarray whose sum is greater than or equal to S. 
Return 0, if no such subarray exist.
"""

import numpy 

def smallest_subarray_with_given_sum(s, arr):
    j = 0
    ssum = 0
    import math
    length=math.inf
    minL = []
    for i in range(0, len(arr)): 
        ssum += arr[i]
        while ssum  >=  s:
              length = min(length, i-j+1)
              minL.append(length)
              ssum -= arr[j]
              j=j+1
            
    print(minL)

    if minL == []:
        return 0
    else:
        r = min(minL)
        return r


def main():
    arr = [1,2,4,1,1]
    r = smallest_subarray_with_given_sum(7,arr)
    print(r)



main()
