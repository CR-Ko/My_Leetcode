"""
Given an array of positive numbers and a positive number k, find the maximum 
sum of any contiguous subarray of size k.
"""

import numpy 
def max_sub_array_of_size_k(arr, k):
    cur = 0
    for i in range(0, len(arr)-k + 1): # why +1 ? Since for loop in python will run range(0, 10) from 0 to 9 
        sum = 0
        for j in range(i, i+k):
            sum += arr[j]
        if cur < sum:                  # why this? To memorize the sum which the condition is satisfied.
            cur = sum 
    return cur

def main():
    arr = [2,1,5,1,3,2]
    k = 3
    print(max_sub_array_of_size_k(arr, k))

####     

#import numpy
#def max_sub_array_of_size_k(k, arr):
#    cur = 0
#    for i in range(0, len(arr)-k+1):
#        s=0
#        for j in range(i, i+k):
#            s += arr[j]
#        if cur < s:
#            cur = s

#    return  cur


#def main():
#    arr = [2,1,5,1,3,2]
#    k = 3
#    print(max_sub_array_of_size_k(k, arr))


main()
