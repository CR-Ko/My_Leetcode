"""
Given an array of integers, and a number ‘sum’, print all pairs in the array whose sum is equal to ‘sum’.

Examples :
Input  :  arr[] = {1, 5, 7, -1, 5},
          sum = 6
Output : (1, 5) (7, -1) (1, 5)

Input  :  arr[] = {2, 5, 17, -1},
          sum = 7
Output :  (2, 5)
"""
class Solution(object):
    def printPairs(self, arr, n, sum):
        """
        count = 0
        Consider all possible pairs
        and check their sums
        """
        print('arr=', arr)
        for i in range(0, n):
            for j in range(i+1, n):
                print('i,j = ', i ,j)
                if(arr[i]+arr[j]==sum):
                    print('(', arr[i],', ', arr[j], '),', sep="")
        #return


class Solution2(object):
    def printPairs(self, arr, n , sum):
        print('arr= ', arr)


if __name__ == '__main__':
    arr = [1,5,7,-1,5]
    n = len(arr)
    sum = 8
    sol = Solution()
    sol.printPairs(arr, n, sum)

