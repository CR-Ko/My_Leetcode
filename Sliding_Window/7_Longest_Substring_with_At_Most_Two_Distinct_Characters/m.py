class Solution(object):
    def findLength(self, arr):
        """
        type:  str
        rtype: int
        """
        # Caterpillar
        res = 0
        m = {}
        j = 0
        print(arr)
        n = len(arr)
        for i in range(0, n): # Make Big O more clear
            print('---loop start i:',i)
            
            if arr[i] in m:
                m[arr[i]]+=1
            else:
                m[arr[i]]=1
            
            print('before while')
            print('m:', m)
            while len(m) > 2 and j <= i:
                print('inside while')
                m[arr[j]]-=1
                if m[arr[j]]==0:
                    del m[arr[j]]
                j+=1    
            res = max(res, i-j+1)   
            print('i,j:',i,j)
            print('after while')
            print(m)
            
            print('---loop once---')
        print(m)
        print('--end--')
        return res # len(m) is wrong, always be 2

if __name__ == '__main__':
    arr = 'eceba'
    #arr = 'ccaabbb'
    sol = Solution()
    print(sol.findLength(arr))

