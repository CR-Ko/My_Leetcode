class Solution:
    def findMaxSumSizeK(self, k, arr):
        cur = 0
        for end in range(0, len(arr)-k+1):
            s = 0
            for start in range(end,end+k):
                s+=arr[start]
            if cur < s:
                cur = s
        res = cur
        return res
    



if __name__ == "__main__":
    arr = [2,1,5,1,3,2]
    arr = [2,3,4,1,5]
    k = 3
    k = 2
    #sol = Solution()
    print(Solution().findMaxSumSizeK(k, arr))

